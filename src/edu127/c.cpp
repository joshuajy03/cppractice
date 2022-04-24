
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
        long long x;
        cin >> x;
        long long array[n];
        for (int j = 0; j < n; j++) {
            cin >> array[j];
        }
        sort(array, array+n);
        long long day = 0;
        long long answer = 0;
        for (int j = 1; j < n; j++) {
            array[j] += array[j-1];
            
        }
        int prev = n-1;
        while (prev != -1) {
            int num = -1;
            for (int j = prev; j >= 0; j--) {
                if ((array[j] + ((j+1)*day)) <= x) {
                    num = j;
                    answer += (((x-(array[j] + (j+1)*day))/(j+1)) + 1)*(j + 1);
                    break;
                }
            }
            if (num == -1) {
                break;
            }
            day += ((x-(array[num] + (num+1)*day))/(num+1)) + 1;
            prev = num;
        }
        cout << answer << "\n";
    }
}
 