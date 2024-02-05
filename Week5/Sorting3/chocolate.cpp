#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(), a.end());
    long long diff = INT_MAX;
    long long minElem = a[0];
    long long maxElem = a[m-1];
    for(int i=0; i<=n-m; i++) {
        cout << "Min: " << minElem << "\t" << "Max: " << maxElem << endl;
        diff = min(diff, maxElem - minElem);
        if (i == n-m+1) return diff;
        maxElem = a[i+m];
        minElem = a[i+1];
    }
    return diff;
} 

int main() {
    vector<long long int> arr {3, 4, 1, 9, 56, 7, 9, 12};
    long long int n = 8, m = 5;
    cout << findMinDiff(arr, n, m) << endl;
}