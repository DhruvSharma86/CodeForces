#include <iostream>
// #include <string>
using namespace std;

// int expression(int x) {
//
//     string s;
//     cin >> s;
//     if (s[1] == '+') {
//
//     }
// }

int main() {
    int n,x = 0;
    cin >> n;
    while(n > 0) {
        n--;
        string s; cin >> s;
        if (s[1] == '+') {x++;}
        else if (s[1] == '-') {x--;}
    }
    cout << x;
    return 0;
}