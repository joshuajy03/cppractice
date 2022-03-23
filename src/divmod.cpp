#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int l; int r; int a;
        cin >> l >> r >> a;
        int mod = r/a;
        mod *= a;
        mod--;
        int maxV = 0;
        if (mod >= l && mod <= r) {
            maxV = (mod/a) + (mod%a);
        }
        maxV = max(maxV, (r/a) + (r%a));
        cout << maxV << endl;
    }
}
