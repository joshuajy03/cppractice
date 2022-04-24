#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    cin >> s;
    int U = 0;
    int D = 0;
    int L = 0;
    int R = 0;
    for (int j = 0; j < s.length(); j++) {
        if (s.at(j) == 'U') {
            U++;
        } else if (s.at(j) == 'D') {
            D++;
        }
        else if (s.at(j) == 'L') {
            L++;
        }
        else if (s.at(j) == 'R') {
            R++;
        }
    }
    int ans = min(L, R) * 2;
    ans += (min(U, D)*2);
    cout << ans << endl;
}
