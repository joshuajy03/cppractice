#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int num;
        cin >> num;
        long long k;
        cin >> k;
        long long array[num];
        for (int b = 0; b < num; b++) {
            cin >> array[b];
        }
        int j = 30;
        long long answer = 0;
        while (j >= 0) {
            long long temp = 0;
            long long temp2 = 1<<j;
            j--;
            for (int a = 0; a < num; a++) {
                if ((temp2 & array[a]) != temp2) {
                    temp++;
                }
            }
            if (k >= temp) {
                answer += temp2;
                k -= temp;
            }
        }
        cout << answer << endl;
    }
}
