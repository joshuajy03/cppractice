#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int ones = 0;
        int nums[n];
        set<int> vals;
        bool consecutive = false; 
        for (int j = 0; j < n; j++) {
            cin >> nums[n];
            if (nums[n] == 1) {
                ones++;
            }
            vals.insert(nums[n]);
            if (vals.find(nums[n]-1) != vals.end() || vals.find(nums[n]+1) != vals.end()) {
                consecutive = true;
            }
        }
        if (ones > 0 && consecutive) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        
    }
}
