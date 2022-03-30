#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
string hello(string);
int main() {
  string name ;
  cin >> name;
  hello(name);
  cout << hello(name);
} 
string hello(string word){
  string wel[3][2] = {{"hello ",""},{""," 歡迎"},{"hello "," 歡迎"}};
  srand(time(NULL));
  int a = rand()%3;
  string b;
  
  b = wel[a][0] + word + wel[a][1];
  return b;  
  }

