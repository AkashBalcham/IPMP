#include <bits/stdc++.h>
using namespace std;

vector<long long int> twoOddNum(long long int Arr[], long long int N) {
    // code here
    vector<long long int> res(2);
    long long int x = 0;
    for(int i=0; i<N; i++) {
        x = x ^ Arr[i];
    }
    int firstSetBitIndex = 0;
    while(x > 0) {
        if (x & 1) break;
        firstSetBitIndex++;
        x = x >> 1;
    }
    int xor1 = 0, xor0 = 0;
    for(int i=0; i<N; i++) {
        if (Arr[i] & (1 << firstSetBitIndex)) {
            xor1 ^= Arr[i];
        } else {
            xor0 ^= Arr[i];
        }
    }
    res[0] = max(xor1, xor0);
    res[1] = min(xor1, xor0);
    return res;
}

int main() {
    long long int arr[] = {4, 2, 4, 5, 2, 3, 3, 1};
    long long int N = 8;
    for(int i: twoOddNum(arr, N)) {
        cout << i << " ";
    }
    cout << endl;
}