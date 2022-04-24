#include <bits/stdc++.h>
using namespace std;

int checkPalindrome(string str)
{
    // Calculating string length
    int len = str.length();
   
    // Traversing through the string
    // upto half its length
    for (int i = 0; i < len / 2; i++) {
       
        // Comparing i th character
        // from starting and len-i
        // th character from end
        if (str[i] != str[len - i - 1])
            return false;
    }
   
    // If the above loop doesn't return then it is
    // palindrome
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin.exceptions(cin.failbit);
    int t;
    cin >> t;
    for (int  i = 0; i < t; i++) {
        long long n;
        cin >> n;
        set<long long> array;
        for (int j = 1; j <= sqrt(n); j++) {  
            if (n%j == 0) {
                array.insert(n/j);
                array.insert(j);
                
            }
        }
        long long answer = 0;
        for (auto ita : array) {
            if (checkPalindrome(to_string(ita)) == true) {
                answer++;
            }
        }
        
        cout << "Case #" << i+1 << ": " << answer << "\n";

    }
}
