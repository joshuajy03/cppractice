#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int num;
        cin >> num;
        map<string, long long> array;
        for (int j = 0; j < num; j++) {
            string s;
            cin >> s;
            array.insert(make_pair(s, 0));
            map<string, long long>::iterator it = array.find(s); 
            if (it != array.end())
                    (it->second)++;
        }
        long long answer = 0;
        for (auto x : array) {
            for (auto y: array) {
                if (x.first.at(0) == y.first.at(0) && x.first.at(1) == y.first.at(1)) {
                    continue;
                } else if (x.first.at(0) == y.first.at(0)) {
                    answer += (x.second * y.second);
                } else if (x.first.at(1) == y.first.at(1)) {
                    answer += (x.second * y.second);
                }
            }
        }
        answer /= 2;
        cout << answer << endl;

    }
}
