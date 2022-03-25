#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
  int turn = 0,cpans = 0;
  srand(time(NULL));
  turn = (rand() % 2) + 1;
  cpans = (rand() % 100) + 1;
  int cpmin = 0,cpmax = 101,reply = 0,cpguess = 0,guess = 0,min = 1,max = 100;
  if (turn == 1) {
    srand(time(NULL));
    cout << "\n此局為電腦先，請先想好答案。\n************* ";
    }else {
    cout << "\n此局為玩家先，請輸入猜測(也先想好自己的答案):";
    cin >> guess;
    if (guess > cpans) {
      max = guess;
      cout << "\n答案介於" << min << "至" << max <<"之間。";
    }else if (guess < cpans) {
      min = guess;
      cout << "\n答案介於" << min << "至" << max <<"之間。";
    }else {
      cout << "You Get It!";
    }
  }
  while (reply != 3 || guess == cpans) {
    cpguess = (rand() % (cpmax - cpmin - 1)) + cpmin + 1;
    cout << "\n" << cpguess;
    cout << "\n此為電腦猜測\n如果此數大於答案， 輸入1 \n如果此數小於答案， 輸入2 \n如果此數等於答案， 輸入3:";
    cin >> reply;
    if (reply == 1) {
      cpmax = cpguess;
    }else if(reply == 2) {
      cpmin = cpguess;
    }else {
      cout << "\n遊戲結束!";
      break;
      }
    }
  }