#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin.exceptions(cin.failbit);
    double pi = 3.14159265359;
    int t;
    cin >> t;
    for (int  i = 0; i < t; i++) {
        long long r;
        cin >> r;
        long long a;
        cin  >> a;
        long long b;
        cin >> b;
        double answer = pi * r * r;
        while (r > 0) {
            r = r*a;
            answer += pi * r * r;
            r = r/b;
            answer += pi * r * r; 
        }
        cout << std::fixed;
        cout << "Case #" << i+1 << ": " << answer << "\n";

    }
}
