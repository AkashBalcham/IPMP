#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    vector<int> L(n), R(n);
    L[0] = 0;
    R[n-1] = 0;
    int maxL = 0, maxR = 0;
    for(int i=1; i<n; i++) {
        if (height[i-1] > maxL) {
            maxL = height[i-1];
        }
        L[i] = maxL;
    }
    for(int i=n-2; i>=0; i--) {
        if (height[i+1] > maxR) {
            maxR = height[i+1];
        }
        R[i] = maxR;
    }
    int total = 0;
    for(int i=0; i<n; i++) {
        total += max(min(L[i], R[i]) - height[i], 0);
    }
    return total;
}

int main() {
    vector<int> heights {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(heights) << endl;
}