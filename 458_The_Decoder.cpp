#include <iostream>
using namespace std;

int main () {
    string str;

    while(cin >> str) {
        for (int i = 0; i < str.size(); i++) {
            str[i] = (int)str[i] - 7;
        }
        cout << str << endl;
    }    
    return 0;
}