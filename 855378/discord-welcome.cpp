#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
string welcome (string name) {
  string wel[3][2] = {
    {"歡迎登錄，","。我們希望您帶個披薩來。"},
    {"","跳進了伺服器。"},
    {"很高興見到您，",""}
  }; 
  srand(time(NULL));
  int choice = (rand() % 3);
  string prefix = wel[choice][0];
  string suffix = wel[choice][1];
  return prefix + name + suffix;
  
}
int main() {
  string name;
  cout << "name:";
  cin >> name;

  cout << welcome(name);
  
}