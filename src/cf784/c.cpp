#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        int array[x];
        for (int j = 0; j < x; j++) {
            cin >> array[j];
        }
        int first = array[0] % 2;
        int second = array[1] % 2;
        bool no = false;
        for (int j = 2; j < x; j++) {
            if (j % 2 == 0) {
                if (first != array[j] %2) {
                    cout << "NO" << endl;
                    no = true;
                    break;
                }
            }
            else {
                if (second != array[j] %2) {
                    cout << "NO" << endl;
                    no = true;
                    break;
                }
            }
        }
        if (no == false) {
            cout << "YES" << endl;
        }
    }
}
