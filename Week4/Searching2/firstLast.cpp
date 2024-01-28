#include <bits/stdc++.h>
using namespace std;

vector<int> firstAndLast(vector<int> &arr, int n, int x) {
    // Code here
    vector<int> res(2);
    int first = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    int last = (upper_bound(arr.begin(), arr.end(), x) - arr.begin()) - 1;
    // if (arr[first] != x) {
    //     res[0] = -1;
    // }
    // if (arr[last] != x) {
    //     res[-1] = -1;
    // }
    if (arr[first] != x or arr[last] != x) return { -1 };
    return { first, last };
}

int main() {}