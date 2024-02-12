#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    string res = "";
    vector<string> words;
    string cur = "";
    for(int i=0; i<s.length(); i++) {
        if (s[i] != ' ') cur += s[i];
        else {
            if (cur != "") words.push_back(cur);
            cur = "";
        }
    }
    if (cur != "") words.push_back(cur);
    reverse(words.begin(), words.end());
    for(int i=0; i<words.size()-1; i++) res += (words[i] + " ");        
    res += words[words.size() - 1];
    return res;
}

int main() {
    string s = "hello world";
    cout << reverseWords(s) << endl;
}