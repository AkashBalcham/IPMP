#include <bits/stdc++.h>
using namespace std;

bool rotation(string s1, string s2) {
    s1 += s1;
    for(int i=0; i<s2.length(); i++) {
        if (s1.substr(i, s2.length()) == s2) return true;
    }
    return false;
}

int main() {
    string s1 = "hello", s2 = "lohel";
    cout << rotation(s1, s2) << endl;
}