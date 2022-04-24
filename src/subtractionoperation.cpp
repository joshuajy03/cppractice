#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n; int k;
        cin >> n >> k;
        int nums[n];
        bool works = false;
        unordered_set<int> intSet;
        for (int j = 0; j < n; j++) {
            cin >> nums[j];
            intSet.insert(nums[j]);
        }
        for (int j = 0; j < n; j++) {
            if (intSet.find(nums[j]-k) != intSet.end()) {
                works = true;
                break;
            }
        }
        if (works == false) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        
    }
}
