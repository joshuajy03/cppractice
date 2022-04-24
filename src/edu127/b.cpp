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
        int difference = 0;
        int first;
        cin >> first;
        for (int j = 1; j < n; j++) {
            int second;
            cin >> second;
            difference += (second - first) - 1;
            first = second;
        }
        if (difference <= 2) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

}
