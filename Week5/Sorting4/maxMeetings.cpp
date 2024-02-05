#include <bits/stdc++.h>
using namespace std;

vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
    vector<pair<int, int>> finishTimes;
    for(int i=0; i<N; i++) {
        finishTimes.push_back({ F[i], i });
    }
    sort(finishTimes.begin(), finishTimes.end());
    vector<int> ans;
    ans.push_back(finishTimes[0].second + 1);
    int lastFinishTime = finishTimes[0].first;
    
    for(int i=1; i<N; i++) {
        int startTime = S[finishTimes[i].second];
        if (startTime > lastFinishTime) {
            ans.push_back(finishTimes[i].second + 1);
            lastFinishTime = finishTimes[i].first;
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int N = 6;
    vector<int> S = {1,3,0,5,8,5}, F = {2,4,6,7,9,9};
    vector<int> res = maxMeetings(N, S, F);
}