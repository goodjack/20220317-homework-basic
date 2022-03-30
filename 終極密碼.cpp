#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  srand(time(NULL));
  int num;
  int ans = (rand()%100 + 1);
  cout << "請輸入數字:";
  cin >> num;
  int min = 1;
  int max = 100;
  while(num != ans){
    if(num < ans){
      cout << num << "~"<< max <<"\n請重新輸入:";
      min = num;
      cin >> num;
    }else{
      cout << min << "~" << num <<"\n請重新輸入:";
      max = num;
      cin >> num;
    }
    }
  if(num == ans){
    cout << "答對了!";
  }}