#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string a;
        string b;
        cin >> a >> b;
        int index = 0;
        bool imp = false;
        int count = 0;
        for (int j = 0; j < a.length(); j++) {
            if (index >= b.length()) {
                imp = true;
                break;
            }
            while (b.at(index) != a.at(j)) {
                index++;
                count++;
                if (index >= b.length()) {
                    imp = true;
                    break;
                }
            }
            if (imp == true) {
                break;
            }
            index++;
        }
        if (imp == true) {
            cout << "Case #" << i+1 << ": IMPOSSIBLE" << endl;
        }
        else {
            count += b.length() - index;
            cout << "Case #" << i+1 << ": " << count << endl;
        }
     }
}
