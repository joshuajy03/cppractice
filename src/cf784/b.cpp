#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        int array[x+1] = {0};
        bool found = false;
        for (int j = 0; j < x; j++) {
            int y;
            cin >> y;
            array[y]++;
            if (found == false && array[y] == 3) {
                cout << y << endl;
                found = true;
            }
        }
        if (found == false) {
            cout << -1 << endl;
        }
    }
}
