#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    unordered_map<char, int> mp;
    for(char i: p) mp[i]++;

    vector<int> res;
    unordered_map<char, int> window;
    for(int i=0; i<p.length(); i++) {
        window[s[i]]++;
    }
    if (window == mp) res.push_back(0);
    for(int i=p.length(); i<s.length(); i++) {
        window[s[i-p.length()]]--;
        if (window[s[i-p.length()]] == 0) window.erase(s[i-p.length()]);
        window[s[i]]++;
        if (window == mp) res.push_back(i-p.length() + 1);
    }
    return res;
}

int main() {
    string s = "cbaebabacd", p = "abc";
    vector<int> ans = findAnagrams(s, p);
}