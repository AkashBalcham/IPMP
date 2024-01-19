#include <bits/stdc++.h>
using namespace std;

int maxOnes(vector<int> &arr) {
    int maxOnes = 0, n = arr.size(), maxFlips = 0;
    for(int i: arr) {
        if (i == 1) maxOnes++;
    }
    if (maxOnes == 0 or maxOnes == n) return n;

    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            int c0 = 0, c1 = 0, newOnes = 0;
            int j = i;
            while(j < n) {
                if (arr[j] == 0) {
                    c0++;
                } else {
                    c1++;
                }
                newOnes = c0 - c1;
                if (newOnes > maxFlips) {
                    maxFlips = newOnes;
                }
                j++;
            }
        }
    }
    return maxOnes + maxFlips;
}

int main() {
    vector<int> arr {1, 0, 0, 1, 0};
    cout << maxOnes(arr) << endl;
}

/*
{}

*/