#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string welcome(string name) {
    string welcome[5][2] = {
        {"耶，您成功了，","！"},
        {"歡迎，","。我們希望您帶個披薩來。"},
        {"野生的","出現。"},
        {"\0","跳進了伺服器。"},
        {"很高興見到您，","\0"}
    };
    srand(time(NULL));
    int n = rand() % 5;
    string prefix, suffix;
    prefix = welcome[n][0];
    suffix = welcome[n][1];
    return prefix + name + suffix;
}
int main() {
    string name;
    cout << "Name:";
    cin >> name;

    cout << welcome(name);
}