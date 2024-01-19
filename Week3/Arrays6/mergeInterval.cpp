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
    vector<vector<int>> geh {
        {1, 4},
        {4, 5},
    };
    vector<vector<int>> lesb = merge(geh);
    for(int i=0; i<lesb.size(); i++) {
        cout << lesb[i][0] << " - " << lesb[i][1] << endl;
    }
}