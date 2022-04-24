#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin.exceptions(cin.failbit);
    int t;
    cin >> t;
    for (int  i = 0; i < t; i++) {
        int n;
        cin >> n;
        long long d;
        cin >> d;
        int array[n+2];
        array[0] = 0;
        array[n+1] = 0;
        long long answer = 0;
        for (int j = 1; j < n+1; j++) {
            cin >> array[j];
        }
        for (int j = 0; j < n+1; j++) {
            if ((array[j] == 0) && (array[j+1] == 1)) {
                answer++;
            }
        }
        cout << "Case #" << i+1 << ": " << answer << "\n";

    }
}
