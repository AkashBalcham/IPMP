#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) {
    unordered_map<char, int> mp;
    for(char i: s) mp[i]++;
    int len = 0;
    int oddPresent = 0;
    for(auto it: mp) {
        if (it.second & 1) oddPresent = 1;
        len += it.second / 2 * 2;
    }
    return len + oddPresent;
}

int main() {
    string s = "abccccdd";
    cout << longestPalindrome(s) << endl;
}