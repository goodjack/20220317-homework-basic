#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string welcome(string name){
  srand(time(NULL));
  string h,m,e;
  int r;  
  r=rand()%3+1;
  if(r==1){
    h="耶，";
    m="你成功了";
    e=name;
  }else if(r==2){
    h="歡迎，";
    m=name;
    e="，我們希望您帶個披薩來";
  }else if(r==3){
    h=name;
    m="跳進了";
    e="伺服器";
  }
  return h+m+e;
}
int main() {
  string name;
  cout<<"輸入姓名:";
  cin>>name;
  cout<<welcome(name);
  return 0;
}