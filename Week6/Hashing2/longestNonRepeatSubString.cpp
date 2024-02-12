#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> st;
    int i=0, n=s.length();
    if (n == 0) return n;
    int maxLen = 1;
    int l=0, r=0;
    while(r < n) {
        while(st.find(s[r]) != st.end()) {
            st.erase(s[l]);
            l++;
        }
        st.insert(s[r]);
        maxLen = max(maxLen, r-l+1);
        r++;
    }
    return maxLen;
}

int main() {
    string s = "abcabcabcd";
    cout << lengthOfLongestSubstring(s) << endl;
}