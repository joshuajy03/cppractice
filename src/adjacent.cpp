#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string in;
        cin >> in;
        char letter;
        cin >> letter;
        bool yes = false;
        for (int i = 0; i < in.length(); i += 2) {
            if (in.at(i) == letter) {
                cout << "YES" << endl;
                yes = true;
                break;
            }
        }
        if (!yes) {
            cout << "NO" << endl;
        }
    }
}