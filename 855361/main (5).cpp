#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string Welcome(string name){
  string welcome[2][4] = {
    {"耶，您成功了，", "歡迎，", "", "很高興見到您，"},
    {" !", "。我們希望您帶個披薩來。", " 跳進了伺服器。", ""}
  };
  srand(time(NULL));
  int a = (rand()%4)+1;
  string prefix = welcome[0][a];
  string suffix = welcome[1][a];
  return prefix + name + suffix;
}

int main() {
  string name;
  cin >> name;
  cout << Welcome(name);
}
