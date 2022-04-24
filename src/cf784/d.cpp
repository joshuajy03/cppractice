#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        string s;
        cin >> s;
        s = "W" + s + "W";
        bool no = false;
        for (int j = 0; j < s.length()-1; j++) {
            if (s.at(j) == 'W') {
                int counter = 0;
                char next = s.at(j+1);
                bool different = false;
                while (s.at(counter + j + 1) != 'W') {
                    if (next != s.at(counter + j + 1)) {
                        different = true;
                        break;
                    }
                    counter++;
                }
                if (different == false && counter != 0) {
                    no = true;
                    break;
                }
            }
        }
        if (no == false) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
