#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int ans = rand() % 100, num, s_num = 1, b_num = 100;
    while(1){
        cout << "請輸入一個" << s_num << "~" << b_num << "的數:";
        cin >> num;
        if (num >= b_num || num <= s_num){
            cout << "請重新輸入\n"; 
        }else if (ans < num){
            b_num = num;
        }else if (ans > num){
            s_num = num;
        }else{
            break;
        }  
    }
    cout << "你猜到了";
}
