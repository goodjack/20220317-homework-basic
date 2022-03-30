#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  srand(time(NULL));
  int num;
  int guess;
  int ans = (rand()%100 + 1);
  cout << "請輸入一個數字:";
  cin >> guess;
  int min = 0;
  int max = 100;
  while(guess != ans){
    if(guess < ans){
      cout << guess << "~"<< max <<"請重新輸入:";
      min = guess;
      cin >> guess;
    }else{
      cout << min << "~" << guess <<"請重新輸入:";
      max = guess;
      cin >> guess;
    }
    }
  if(guess == ans){
    cout << "答對了!";
  }

} 