#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void dfs(int i, string &curString, string s1, string s2) {
    if (curString.length() == s2.length()) {
        if (curString == s2) {
            cnt++;
        }
        return;
    }
    if (i == s1.length()) {
        if (curString == s2) {
            cnt++;
        }
        return;
    }
    int l = curString.length();
    for(int j=i; j<s1.length(); j++) {
        if (s1[j] == s2[l]) {
            curString += s1[j];
            dfs(j+1, curString, s1, s2);

            curString.erase(curString.length() - 1);
        }
    }
}

int countWays(string s1, string s2) {
    string p = "";
    dfs(0, p, s1, s2);
    return cnt;
}

int main() {
    string s1 = "geeksforgeeks";
    string s2 = "gks";
    cout << countWays(s1, s2) << endl;
}