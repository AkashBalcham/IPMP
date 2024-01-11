#include <bits/stdc++.h>
using namespace std;

vector<string> powerSet(string s) {
    int n = s.length();
    vector<string> res;
    for(int i=0; i<(1 << n); i++) {
        string r = "";
        for(int j=0; j<n; j++) {
            if (i & (1 << j)) {
                r += s[j];
            }
        }
        if (r.length() > 0) {
            res.push_back(r);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main() {
    string s = "aa";
    // cin >> s;
    vector<string> res = powerSet(s);
    for(string x: res) {
        cout << x << " ";
    }
    cout << endl;
}