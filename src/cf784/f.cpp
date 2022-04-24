#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin.exceptions(cin.failbit);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int array[n];
        for (int j = 0; j < n; j++) {
            cin >> array[j];
        }
        int point1 = 0;
        int point2 = n-1;
        int sum1 = array[0];
        int sum2 = array[point2];
        int max = 0;
        while (point1 != point2) {
            if (sum1 == sum2) {
                max = point1 + 1 + n - point2;
                point1++;
                sum1 += array[point1];
            } else if (sum1 < sum2) {
                point1++;
                sum1 += array[point1];
            } else if (sum2 < sum1) {
                point2--;
                sum2 += array[point2];
            }
        }
        cout << max << "\n";
    }
}
