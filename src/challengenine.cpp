#include <bits/stdc++.h>
using namespace std;
//does not work

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        bool imp = false;
        for (int j = 0; j < a.length()-2; j++) {
            if (a.at(j) == '0') {
                if (a.at(j+1) == '0' && a.at(j+2) == '0') {
                    imp = true;
                    break;
                }
                if (a.at(j+1) == '?' && a.at(j+2) == '0') {
                    a.replace(j+1, 1, "1");
                }
                if (a.at(j+1) == '0' && a.at(j+2) == '?') {
                    a.replace(j+2, 1, "1");
                }
            }
            if (a.at(j) == '1') {
                if (a.at(j+1) == '1' && a.at(j+2) == '1') {
                    imp = true;
                    break;
                }
                if (a.at(j+1) == '?' && a.at(j+2) == '1') {
                    a.replace(j+1, 1, "0");
                }
                if (a.at(j+1) == '1' && a.at(j+2) == '?') {
                    a.replace(j+2, 1, "0");
                }
            }
            if (a.at(j) == '?') {
                if (a.at(j+1) == '?' && a.at(j+2) == '1') {
                    a.replace(j+1, 1, "0");
                }
                if (a.at(j+1) == '1' && a.at(j+2) == '?') {
                    a.replace(j+2, 1, "0");
                }
                if (a.at(j+1) == '?' && a.at(j+2) == '0') {
                    a.replace(j+1, 1, "1");
                }
                if (a.at(j+1) == '0' && a.at(j+2) == '?') {
                    a.replace(j+2, 1, "1");
                }
            }
        }
        cout << a << endl;
        if (imp) {
            cout << "Case #" << i+1 << ": " << "IMPOSSIBLE" << endl;
        } else {
            cout << "Case #" << i+1 << ": " << "POSSIBLE" << endl;
        }
        
     }
}
