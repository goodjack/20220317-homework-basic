#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string discord(string n) {
    string discord[5][2] = {
        {"耶，您成功了，","！"},
        {"歡迎，","。我們希望您帶個披薩來。"},
        {"/0","滑入了伺服器中。"},
        {"野生的","出現。"},
        {"很開心您來了，","。"}
    };
    srand(time(NULL));
    int k = rand() % 5;
    string a, b;
    a = discord[k][0];
    b = discord[k][1];
    return a + n + b;
}
int main() {
    string n;
    cout << "Name:";
    cin >> n;

    cout << discord(n);
}