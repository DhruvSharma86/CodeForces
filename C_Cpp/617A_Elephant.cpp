//
// Created by Dhruv Sharma on 06-08-2026.
//
#include <iostream>
using namespace std;

int main() {
    int x, s = 1;
    cin >> x;
        if (x == 1 || x == 2 || x == 3 || x == 4 || x == 5) {
            cout << s;
        }
        else {
            int t = x / 5;
            cout << t+s;
        }
}