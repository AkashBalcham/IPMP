#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b){
    
    // Your code here
    int n1 = a.length(), n2 = b.length();
    if (n1 != n2) return false;
    map<char, int> ma, mb;
    for(int i=0; i<n1; i++) {
        ma[a[i]]++; mb[b[i]]++;
    }
    return ma == mb;
    
}

int main() {
    string s1 = "allergy", s2 = "allergic";
    cout << isAnagram(s1, s2) << endl;
}