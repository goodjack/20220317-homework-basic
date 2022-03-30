#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(NULL));
  int an = rand()%100;
  int num , bnum, snum;
  bnum = 100;
  snum = 1;
  while (1){
    cout << "請輸入一個介於" << snum << "~" << bnum << "之間的數:";
    cin num;  
    if (num >= bnum or num <= snum){
      cout << "請重新輸入\n"; 
    }else if (an < num){
      b_num = num;
    }else if (an > num){
      s_num = num;
    }else{
      break;
      }  
    }
  cout << "你答對了";
}