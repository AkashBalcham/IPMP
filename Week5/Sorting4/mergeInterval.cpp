#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    stack<vector<int>> s;
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    for(int i=0; i<n; i++) {
        if (s.empty()) {
            s.push(intervals[i]);
        } else if (s.top()[1] >= intervals[i][0]) {
            vector<int> p = s.top();
            s.pop();
            s.push({ p[0], max(p[1], intervals[i][1]) });
        } else {
            s.push(intervals[i]);
        }
    }
    vector<vector<int>> res;
    while(!s.empty()) {
        res.push_back(s.top());
        s.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<vector<int>> arr {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> res = merge(arr);
}