#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int zeros = 0;
        int ones = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s.at(j) == '0') {
                zeros++;
            }
            else {
                ones++;
            }
        }
        int ans = min(zeros, ones);
        if (ans % 2 == 1) {
            cout << "DA" << endl;
        } else {
            cout << "NET" << endl;
        }
    }
}
