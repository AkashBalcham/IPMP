#include <bits/stdc++.h>
using namespace std;

map<char, string> mp = {
    { '2', "abc" },
    { '3', "def" },
    { '4', "ghi" },
    { '5', "jkl" },
    { '6', "mno" },
    { '7', "pqrs" },
    { '8', "tuv" },
    { '9', "wxyz" }
};
vector<string> solutions;
void dfs(int i, string &curPath, string digits) {
    if (i == digits.length()) {
        string x = curPath;
        solutions.push_back(x);
        return;
    }

    char digit = digits[i];
    for(int j=0; j<mp[digit].length(); j++) {
        curPath += mp[digit][j];
        dfs(i+1, curPath, digits);

        curPath.erase(curPath.length() - 1);
    }
}

vector<string> letterCombinations(string digits) {
    if (digits.length() == 0) return solutions;
    string curPath = "";
    dfs(0, curPath, digits);
    for(auto i: solutions) {
        cout << i << endl;
    }
    return solutions;
}


int main() {
    
}