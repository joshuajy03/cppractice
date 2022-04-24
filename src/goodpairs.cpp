#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int max1 = 0;
        int min1 = INT_MAX;
        int max2 = 1;
        int min2 = 1;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x > max1) {
                max1 = x;
                max2 = j+1;
            }
            if (x < min1) {
                min1 = x;
                min2 = j+1;
            }
        }
        cout << min2 << " " << max2 << endl;
    }
}
