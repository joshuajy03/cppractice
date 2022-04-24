#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    t *= 2;
    long long answer = 0;
    for (long long i = 0; i < t; i++) {
        if (i*(i+1) <= t) {
            answer = i;
        } else {
            break;
        }
    }
    t /= 2;
    long long temp = answer*(answer+1)/2;
    long long temp2 = answer;
    answer = t-temp;
    if (answer == 0) {
        answer = temp2;
    }

    cout << answer << endl;
}
