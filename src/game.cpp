#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int num[n];
        for (int j = 0; j < n; j++) {
            cin >> num[j];
        }
        int x = 0;
        while (num[x] != 0 && x < n) {
            x++;
        }
        x--;
        int y = n-1;
        while (num[y] != 0 && y >= 0) {
            y--;
        }
        y++;
        if (x == n-1) {
            cout << 0 << endl;
        } else {
        cout << y-x << endl;
        }
        
    }
}
