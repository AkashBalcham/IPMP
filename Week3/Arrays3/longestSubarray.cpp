#include <bits/stdc++.h>
using namespace std;

long long int longestSubarry(long long int A[], long long int N) {
    int maxLen = 0, i = 0;
    int curLen = 0;
    while(i < N) {
        if (A[i] < 0) {
            i++;
            curLen = 0;
        } else {
            int j = i + 1;
            curLen = 1;
            while(j < N and A[j] >= 0) {
                curLen++;
                j++;
            }
            maxLen = max(maxLen, curLen);
            if (j == N) break;
            i = j;
        }
    }
    return maxLen;
}

int main() {
    long long int arr[] = {2, 3, 4, -1, -2, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << longestSubarry(arr, n) << endl;
}