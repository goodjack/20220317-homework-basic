#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
string welcome(string);

int main() {
  string name;
  cout << "請輸入名字: ";
  cin >> name;

  cout << welcome(name);
}

string welcome(string word){
  string hello[3][2] = {{"hello ",""},{"嗨嗨~ ",""},{""," 歡迎回歸"}};
  srand(time(NULL));
  int i = rand() % 3;
  string t;
  t = hello[i][0] + word + hello[i][1];
  return t;
}