#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        if (x <= 1399) {
            cout << "Division 4" << endl;
        } else if (x <= 1599) {
            cout << "Division 3" << endl;
        } else if (x <= 1899) {
            cout << "Division 2" << endl;
        } else {
            cout << "Division 1" << endl;
        }
    }
}
