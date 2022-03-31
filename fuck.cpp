#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));
  int cans=rand()%101;
  bool c = false;
  int max =100;
  int min = 0;
  int cmax = 100;
  int cmin = 0;
  int ask,ans,cask,yesno;
  while(c==false){
    cout<<"猜一數介於"<<min<<"-"<<max<<"之間\n";
    cin>>ask;
    if(ask>cans){
      if(ask>max){cout<<"error\n";}
      else{max=ask;}
    }
    else if (ask<cans){
      if(ask<min){cout<<"error\n";}
      else{min=ask;}
    }
    else if (ask==cans){cout<<"你贏了\n";c=true;continue;}
    else{cout<<"error";}
    
    cask=rand()%(cmax-cmin)+cmin;
    ask = 0;
    cout<<"電腦猜了"<<cask<<"\n1.答對\n2.太大了\n3.太小了\n";
    cin>>yesno;
    if(yesno==2){
      if(cask>cmax){cout<<"error\n";}
      else{cmax=cask;}
    }
    else if (yesno==3){
      if(cask<cmin){cout<<"error\n";}
      else{cmin=cask;}
    }
    else if (yesno==1){cout<<"電腦猜對，你輸了\n";c=true;continue;}
    else{cout<<"error";}   
  }
}