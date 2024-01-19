#include <bits/stdc++.h>
using namespace std;

int maxOccured(int L[], int R[], int n, int maxx) {
    int cnt, elem = -1;
    int maxCnt = INT_MIN;
    for(int i=0; i<maxx; i++) {
        cnt = 0;
        for(int j=0; j<n; j++) {
            if (i >= L[j] and j <= R[j]) cnt++;
        }

        if (cnt > maxCnt) {
            maxCnt = cnt;
            elem = i;
        }
    }
    return elem;
}

int main() {
    int L[] = {2, 1, 3}, R[] = {5, 3, 9};
    int n = 3, maxx = 9;
    cout << maxOccured(L, R, n, maxx) << endl;
}