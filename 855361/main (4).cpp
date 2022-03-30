#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  srand(time(NULL));
  int answer = (rand() % 100) + 1;
  int max = 100, min = 1;
  cout << "輸入一" << min << "~" << max << "之整數:";
  int guess = 0;
  cin >> guess;
  for(int i = 0; i < 100; i++){
    if(answer > guess && guess > min){
      min = guess;
    }else if(answer < guess && guess < max){
      max = guess;
    }else if(answer == guess){
      cout << "正確答案為" << answer << "!\n";
      max = 100, min = 1;
      srand(time(NULL));
      answer = (rand() % 100) + 1;
    }else if(guess <= min || guess >= max){
      cout << "請輸入範圍內之整數!\n";
    }
    cout << "輸入一" << min << "~" << max << "之數字:";
    guess = 0;
    cin >> guess;
  }
}