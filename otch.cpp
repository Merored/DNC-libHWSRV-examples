/**
 * Данная программа выводит Z-отчёт ККМ по текущей дате и следовательно закрывает смену
 * @author: Vlad Sventik 
 */
#include <iostream>
#include <string>
#include <stdio.h>
#include <locale.h>
#include "/usr/local/include/hwsrv.h"
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){};

int Zotch(){

  //Получаем дату в нужном формате и выводим её в двух видах
  //!!!!Удалить вывод перед релизом
  char buffer[10];
  time_t seconds = time(NULL);
  tm* timeinfo = localtime(&seconds);
  char* format = "%d_%m_%y";
  strftime(buffer, 10, format, timeinfo);
  printf("Current Date = %s \n",buffer);
  int year = ((buffer[6]-'0')*10)+(buffer[7]-'0');
  int month = ((buffer[3]-'0')*10)+(buffer[4]-'0');
  int day = ((buffer[0]-'0')*10)+(buffer[1]-'0');
  printf("year = %d \n",year);
  printf("month = %d \n",month);
  printf("day = %d \n",day);


  HWSRV *hw = new HWSRV(); //Запускаем либу драйвера

  /**
   * Список режимов Mode ККМ
   * 0 — Выбора
   * 1 — Регистрации
   * 2 — Х-отчет
   * 3 — Z-отчет
   * 4 — Режим программирования
   * 5 — Доступ к ФП
   * 6 — Доступ к ЭКЛЗ
   * 7 - Дополнительный
   */

  int CMode = hw->ECR_ReadCurrentMode(); //Проверяем текущий Mode
  if (CMode != 0) {
    fprintf(stderr, "ECR_ReadCurrentMode()  С ошибкой Код ошибки = %d \n", CMode);
    exit(CMode);
  }

  int ecr_setmode = hw->ECR_SetMode(0,""); //Переходим в режим выбора Mode
  if (ecr_setmode != 0) {
    fprintf(stderr, "Ecr Setmode(0) (Перед Z-отчётом)  С ошибкой Код ошибки = %d \n", ecr_setmode);
    exit(ecr_setmode);
  }


  int ecr_setmode1 = hw->ECR_SetMode(3,""); //Переходим в режим Z-отчёт Mode
  if (ecr_setmode1 != 0){
    fprintf(stderr, "Ecr Setmode(3)  С ошибкой Код ошибки = %d \n", ecr_setmode1);
    exit(ecr_setmode1);
  }

  int zotch = hw->ECR_Report(1,day,month,year,0,0,0,hw->ECR_GetSession(),hw->ECR_GetEndSession()); //Выводим Z-отчёт 
  if (zotch != 0){
    fprintf(stderr, "При выводе Z-отчёта произошла ошибка Код ошибки = %d \n", zotch);
    exit(zotch);
  }

  int ecr_setmode2 = hw->ECR_SetMode(0,""); //Возвращаемся к режиму выбора дабы избежать конфликтов
  if (ecr_setmode2 != 0){
    fprintf(stderr, "Ecr Setmode(0) (После Z-отчёта)  С ошибкой Код ошибки = %d \n", ecr_setmode2);
    exit(ecr_setmode2);
  }
  delete hw;
  return 0;
}


int Xotch(){

  //Получаем дату в нужном формате и выводим её в двух видах
  //!!!!Удалить вывод перед релизом
  char buffer[10];
  time_t seconds = time(NULL);
  tm* timeinfo = localtime(&seconds);
  char* format = "%d_%m_%y";
  strftime(buffer, 10, format, timeinfo);
  printf("Current Date = %s \n",buffer);
  int year = ((buffer[6]-'0')*10)+(buffer[7]-'0');
  int month = ((buffer[3]-'0')*10)+(buffer[4]-'0');
  int day = ((buffer[0]-'0')*10)+(buffer[1]-'0');
  printf("year = %d \n",year);
  printf("month = %d \n",month);
  printf("day = %d \n",day);


  HWSRV *hw = new HWSRV(); //Запускаем либу драйвера

  /**
   * Список режимов Mode ККМ
   * 0 — Выбора
   * 1 — Регистрации
   * 2 — Х-отчет
   * 3 — Z-отчет
   * 4 — Режим программирования
   * 5 — Доступ к ФП
   * 6 — Доступ к ЭКЛЗ
   * 7 - Дополнительный
   */

  int CMode = hw->ECR_ReadCurrentMode(); //Проверяем текущий Mode
  if (CMode != 0) {
    fprintf(stderr, "ECR_ReadCurrentMode()  С ошибкой Код ошибки = %d \n", CMode);
    exit(CMode);
  }

  int ecr_setmode = hw->ECR_SetMode(0,""); //Переходим в режим выбора Mode
  if (ecr_setmode != 0) {
    fprintf(stderr, "Ecr Setmode(0) (Перед X-отчётом)  С ошибкой Код ошибки = %d \n", ecr_setmode);
    exit(ecr_setmode);
  }


  int ecr_setmode1 = hw->ECR_SetMode(2,""); //Переходим в режим X-отчёт Mode
  if (ecr_setmode1 != 0){
    fprintf(stderr, "Ecr Setmode(2)  С ошибкой Код ошибки = %d \n", ecr_setmode1);
    exit(ecr_setmode1);
  }

  int zotch = hw->ECR_Report(2,day,month,year,0,0,0,hw->ECR_GetSession(),hw->ECR_GetEndSession()); //Выводим X-отчёт
  if (zotch != 0){
    fprintf(stderr, "При выводе X-отчёта произошла ошибка Код ошибки = %d \n", zotch);
    exit(zotch);
  }

  int ecr_setmode2 = hw->ECR_SetMode(0,""); //Возвращаемся к режиму выбора дабы избежать конфликтов
  if (ecr_setmode2 != 0){
    fprintf(stderr, "Ecr Setmode(0) (После X-отчёта)  С ошибкой Код ошибки = %d \n", ecr_setmode2);
    exit(ecr_setmode2);
  }
  delete hw;
  return 0;
}

