#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  int a=1;
  int b=100;
  int c;
  int d;
  srand(time(NULL));
  d=rand()%100+1;
  cout <<"輸入一個數字（1到100）：";
  cin >> c;
  while(c!=d){
    if(c>b or c<a){
      cout <<"注意範圍!!\n";
      cout <<"輸入一個數字（";
      cout << a;
      cout <<"到";
      cout <<b;
      cout <<")：";
      cin >> c;
    }else if(c<d){
      a=c;
      cout <<"輸入一個數字（";
      cout << a;
      cout <<"到";
      cout <<b;
      cout <<")：";
      cin >> c;
    }else{
      b=c;
      cout <<"輸入一個數字（";
      cout <<a;
      cout <<"到";
      cout <<b;
      cout <<"):";
      cin >> c;
    }
  }
  cout <<"猜對了 是" ;
  cout <<d;
}
      
      
      