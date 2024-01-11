#include <bits/stdc++.h>
using namespace std;

set<vector<int>> sols;
void dfs(int i, vector<int> &curPath, vector<int> &c, int target) {
    int sum = accumulate(curPath.begin(), curPath.end(), 0);
    if (i == c.size()) {
        if (sum == target) {
            vector<int> x = curPath;
            // sort(x.begin(), x.end());
            sols.insert(x);
            return;
        }
    }
    if (sum == target) {
        vector<int> x = curPath;
        sols.insert(x);
        return;
    }
    // if (sum > target) return;

    for(int j=i; j<c.size(); j++) {
        if (j > i and c[j] == c[j-1]) continue;
        if (c[j] + sum <= target) {
            curPath.push_back(c[j]);
            dfs(j+1, curPath, c, target);
            curPath.pop_back();
        }

    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<int> p;
    sort(candidates.begin(), candidates.end());
    dfs(0, p, candidates, target);
    vector<vector<int>> s (sols.begin(), sols.end());
    return s;
}

int main() {
    vector<int> candy;
    int target;
}