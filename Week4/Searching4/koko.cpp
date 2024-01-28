#include <bits/stdc++.h>
using namespace std;

long long getHours(vector<int>& piles, long long speed) {
    long long count = 0;
    for(auto itr:piles) {
        count += (itr/speed + (itr%speed != 0));
    }
    return count;
}

int minEatingSpeed(vector<int>& piles, int h) {
    long long int l = 1, r = *max_element(piles.begin(), piles.end());
    long long int ans = r;
    while(l <= r) {
        long long int mid = (l + r) >> 1;
        if (h >= getHours(piles, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return (int)ans;
}

int main() {
    vector<int> piles {3, 6, 7, 11};
    int h = 8;
    cout << minEatingSpeed(piles, h) << endl;
}