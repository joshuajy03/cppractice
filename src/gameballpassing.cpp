#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int pass[n];
        for (int j = 0; j < n; j++) {
            cin >> pass[j];
        }
        int lastVal = 0;
        int lastIndex = -1;
        int balls = 0;
        while (true) {
            int maxIndex = -1;
            int maxValue = 0;
            int zeros = 0;
            for (int j = 0; j < n; j++) {
                if (maxValue < pass[j] && lastIndex != j) {
                    maxValue = pass[j];
                    maxIndex = j;
                }
                if (pass[j] == 0) {
                    zeros++;
                }
            }
            if (zeros == n) {
                break;
            }
            if (lastIndex == -1) {
                balls++;
            }
            if (maxValue = 0) {
                lastIndex == -1;
                continue;
            }
            pass[maxIndex]--;
            //cout << pass[maxIndex] << endl;
            lastIndex = maxIndex;
        }
        cout << balls << endl;
     }
}
