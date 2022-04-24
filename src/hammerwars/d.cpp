#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n;
    cin >> m;
    pair<int, int> nums[n+1];
    for (int i = 0; i < n+1; i++) {
        nums[i].first = 0;
        nums[i].second = i;
    }
    int xs[m];
    int ys[m];
    for (int i = 0; i < m; i++) {
        int x;
        int y;
        cin >> x;
        cin >> y;
        nums[x].first++;
        nums[y].first++;
        xs[i] = x;
        ys[i] = y;
    }
    sort(nums, nums + n);
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (nums[n-i-1].first + nums[n-j-1].first < m) {
                break;
            }
            int count = 0;
            for (int k = 0; k < m; k++) {
                if ((xs[k] == nums[n-i-1].second && ys[k] == nums[n-j-1].second)  || (ys[k] == nums[n-i-1].second && xs[k] == nums[n-j-1].second)) {
                    count++;
                }
            }
            if (nums[n-i-1].first + nums[n-j-1].first - count >= m) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    
}
