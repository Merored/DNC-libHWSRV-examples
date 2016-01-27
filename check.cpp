#include <iostream>
#include <string>
#include <string.h>
#include <iconv.h>
#include <stdio.h>
#include <cstdlib>
#include <locale.h>
#include "/usr/local/include/hwsrv.h"
#include "otch.h"
#include <cerrno>
#include <fstream>
#include <cstring>
using namespace std;
/**
 Данная программа осуществляет печать чека по параметрам заданным из файла log.txt
 @author: Vladislav Sventik
 */


char* convert(const char* s, const char* from_cp, const char* to_cp)
{
  iconv_t ic = iconv_open(to_cp, from_cp);

  if (ic == (iconv_t)(-1)) {
    fprintf(stderr, "iconv: cannot convert from %s to %s\n", from_cp, to_cp);
    return "";
  }

  char* out_buf = (char*)calloc(strlen(s)+1, 1);
  char* out = out_buf;
  char* in = (char*)malloc(strlen(s)+1);
  strcpy(in, s);

  size_t in_ln = strlen(s);
  size_t out_ln = in_ln;
  size_t k = iconv(ic, &in, &in_ln, &out, &out_ln);
  if(k == (size_t)-1)
    fprintf(stderr, "iconv: %u of %d converted\n", k, strlen(s));

  if(errno != 0)
    fprintf(stderr, "iconv: %s\n", strerror(errno));

  iconv_close(ic);

  return out_buf;
}








int main(){
  setlocale(LC_ALL,"ru_RU.1251");

  int i;
  HWSRV *hw = new HWSRV();

  int CMode = hw->ECR_ReadCurrentMode();
  printf("Current Mode = %d \n",CMode);

  int ecr_setmode = hw->ECR_SetMode(0,"");
  printf("ecr_setmode = %d \n", ecr_setmode);

  ecr_setmode = hw->ECR_SetMode(1,"");
  printf("ecr_setmode = %d \n", ecr_setmode);

  /* Строка "Чек:Номер"*/
  //int lineLenght = hw->ECR_GetCharLineLength();
  //printf("lineLenght = %d \n", lineLenght);
  //char check[20] = "Чек: ";
  //char* check_number = "3514"; 
  //strcat(check,check_number);
  //char * check1 = convert(check, "utf-8", "cp1251");

  //printf("check = %s \n", check1);
  //int ecr_printstring_check = hw->ECR_PrintString(check1,false);
  //printf("ecr_printstring_check = %d \n", ecr_printstring_check);


  int ecr_opencheck = hw->ECR_OpenCheck(0);
  printf("ecr_opencheck = %d \n", ecr_opencheck);

  int checkN = hw->ECR_GetCheckNumber();
  printf("checkN = %d \n",checkN);
  ifstream file("log.txt"); 
  int str = 0;
  while( !file.eof() ) if( file.get() == '\n' ) str++; //Считаем кол-во строк в файле
  file.close(); 

  char buff[200]; // Буфер промежуточного хранения считываемого из файла текста
  ifstream fin("log.txt"); 
  double nalichka = 0.0;
  double card = 0.0;
  if (!fin.is_open()) cout << "Файл не может быть открыт!\n";   
  else{
      
    bool params=false;
    int ecr_registration;
    int ecr_printstring_tovar;
    int summ = 0;
    

    for (int i = 1;i<=str;i++){
      fin.getline(buff, 200); 
   
      if (buff[1] == '*'){cout << "Поймал парамс" << endl;params=true;fin.getline(buff, 200);} //Потом добавить параметр открытия денежного ящика
      char buf2[200],*ptr; //Буффер для хранения обрабатываемой строки и её парсинга
      int k=0, j=0;
      char * name;
      int price;
      int quantity;
      int paramsDat;

      
      if(params==false){
        for(ptr = strtok(buff,";"); ptr != NULL; ptr = strtok(NULL,";"))
        {
          if (j==0){name = convert(ptr, "utf-8", "cp1251");j=1;
          }else{
             if (j==1){price = atoi(ptr);j=2; summ = summ + price;
             }else{
               if (j==2){quantity= atoi(ptr);j=0;}
             }
          }
        }
      ecr_printstring_tovar = hw->ECR_PrintString(name,false);
      printf("summ = %d \n", summ);
      printf("ecr_printstring_tovar = %d \n", ecr_printstring_tovar);
      ecr_registration = hw->ECR_Registration(price,quantity,"s",1,1,0,0,0,false);
      printf("ecr_registration = %d \n",  ecr_registration);
      }else{
        for(ptr = strtok(buff,";"); ptr != NULL; ptr = strtok(NULL,";"))
        {
          if (k==0)
          {
            if (strstr(ptr,"PaymentType") != NULL){
                paramsDat = 1; //В случае если обрабатывается парамтерт типа оплаты
                printf("strstr(ptr,PaymentType) != NULL \n");
            }
            if (strstr(ptr,"Summ") != NULL){
                paramsDat = 2; //В случае если обрабатывается парамтерт суммы
	        printf("strstr(ptr,Summ) != NULL \n");
            }
	    k=1;
          }else{
           if(k==1){
             if(paramsDat == 1){
               if(strstr(ptr,"credit") != NULL){card = (double)summ; printf("strstr(ptr,credit) != NULL \n");}  //В случае если обрабатывается парамтерт типа оплаты           
             } 
             if(paramsDat == 2){
               if(card == 0){nalichka = atof(ptr);printf("paramsDat == 2 \n");  } //В случае если обрабатывается сумма внесённая наличными
             }     
             k=0;  
           }
         }
       }
     } 
   }
   fin.close();
  }




  int ecr_closecheck = hw->ECR_CloseCheck(nalichka,0,card,0.0,0.0,0.00,false); 
  printf("ecr_closecheck = %d \n", ecr_closecheck);
  hw->ECR_CloseConnection();
  return 1;
}




