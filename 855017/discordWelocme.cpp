#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string welcome(string name);

int main() {

  string name;
  cout << "名字? ";
  cin >> name;
  cout << welcome(name);
  
}

string welcome(string name) {

  string prefix[6] = {

  "歡迎，",
  "",
  "耶，您成功了，",
  "野生的 ",
  "",
  "很開心您來了，"
  };
  
  
  string suffix[6] = {
  
  "。我們希望您帶個披薩來。",
  " 剛剛滑入了伺服器中。",
  "",
  " 出現。",
  " 剛剛著陸下來",
  ""
  };

  srand(time(NULL));

  int i = rand() % size(prefix);

  return prefix[i] + name + suffix[i];

}