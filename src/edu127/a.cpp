#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin.exceptions(cin.failbit);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        bool no = false;
        for (int j = 0; j < s.length(); j++) {
            int connecting = 0;
            if (j-1 >= 0 && s.at(j-1) == s.at(j)) {
                connecting++;
            } else if (j+1 < s.length() && s.at(j+1) == s.at(j)) {
                connecting++;
            }
            if(connecting == 0) {
                no = true;
            }
        }
        if (no) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }
}
