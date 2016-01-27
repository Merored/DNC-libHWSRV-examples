#include <iostream>
#include <ctime>
#include "/usr/local/include/hwsrv.h"
using namespace std;
/**
 Данная программа синхронизирует время ККМ с временем компьютера
 Для корректной работы необходимо сначала закрыть смену
 @author: Vladislav Sventik
 */
int main(){
  char buffer[18];
  time_t seconds = time(NULL);
  tm* timeinfo = localtime(&seconds);
  char* format = "%d_%m_%y_%H_%M_%S";
  strftime(buffer, 18, format, timeinfo);
  cout<<"Current Datetime: "<<buffer<<endl;
  int year = ((buffer[6]-'0')*10)+(buffer[7]-'0');
  int month = ((buffer[3]-'0')*10)+(buffer[4]-'0');
  int day = ((buffer[0]-'0')*10)+(buffer[1]-'0');
  int hour = ((buffer[9]-'0')*10)+(buffer[10]-'0');
  int min = ((buffer[12]-'0')*10)+(buffer[13]-'0');
  int second = ((buffer[15]-'0')*10)+(buffer[16]-'0');

  HWSRV *hw = new HWSRV();
  int SetDate =  hw->ECR_SetDate(day,month,year);
  cout<<"SetDate:"<<SetDate<<endl;
  int SetTime = hw->ECR_SetTime(hour,min,second);
  cout<<"SetTime:"<<SetTime<<endl;
return 0;
}
