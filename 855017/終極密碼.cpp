#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

  int cMin = 1, cMax = 100, cNum;
  int uMin = 1, uMax = 100, uNum;
  
  srand(time(NULL));

  int cAns = rand() % 100 + 1;
  int uAns = 0;
  
    while(true){
      
      cout << "想一個數 1~100 輸入> ";
      cin >> uAns;

      if(uAns < 1 || uAns > 100){

        cout << "超出範圍!\n";
        continue;
        
      }else{

        break;
        
      }
    }
  
  int st = rand();
  int count = 0;

  //cout << st % 100 << " " << cAns << "\n\n";
  
  if((st % 100) % 2 == 0){

    cout << "電腦先!\n";
    
    count = 1;
    
  }else{

    cout << "你先!\n";
    
  }

  cout << "-------------\n";
  bool start = true;

  do {

    if(count % 2 == 0){

      while(true){

        cout << "換你猜 ";
        cout << cMin << " ~ " << cMax << " ?? ";
        cin >> cNum;

        if(cNum > cMin && cNum < cMax){
          if(cNum == cAns){

            start = false;
            break;
            
          }
          else if(cNum > cAns){

            cout << "太大了!\n\n";
            cMax = cNum;
            break;
            
          }
          else if(cNum < cAns){

            cout << "太小了!\n\n";
            cMin = cNum;
            break;
            
          }
        }else{

          cout << "超出範圍!!\n";
          continue;
          
        }
      }
    }else{

      cout << "換電腦猜 " << uMin << " ~ " << uMax;

      uNum = rand() % ((uMax - uMin) + 1) + uMin;

      cout << " 電腦猜: " << uNum << "\n";

      if(uNum == uAns){

        start = false;
        
      }
      else if(uNum < uAns){

        cout << "電腦猜得太小了!\n\n";
        uMin = uNum;
        
      }
      else if(uNum > uAns){

        cout << "電腦猜得太大了!\n\n";
        uMax = uNum;
           
      }

    }

    count += 1;
    
  } while(start);

  cout << "\n-------------\n\n";
  
  if(count % 2 == 0){

    cout << "電腦贏了!";
    
  }else{

    cout << "你贏了!";
    
  }
  
}
