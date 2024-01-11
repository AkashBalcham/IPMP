#include <bits/stdc++.h>
using namespace std;

string getPermutation(int n, int k) {
    string s = "";
    int fact = 1;
    for(int i=1; i<=n; i++) {
        s += to_string(i);
        fact *= i;
    }
    fact /= n;
    k--;
    string ans = "";
    while(true) {
        ans += s[k / fact];
        s.erase(k / fact, 1);
        if (s.length() == 0) break;
        k %= fact;
        fact /= s.length();
        cout << ans << endl;
        cout << s << endl;
    }
    return ans;
}

int main() {
    int n = 3, k = 3;
    cout << getPermutation(n, k) << endl;
}