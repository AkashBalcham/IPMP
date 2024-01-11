#include <bits/stdc++.h>
using namespace std;

void helper(int i, vector<int> &arr, int k) {
    if (arr.size() == 1) return;
    int rem = (i + k - 1) % arr.size();
    arr.erase(arr.begin() + rem);
    helper(rem % arr.size(), arr, k);
    
}

int josephus(int n, int k)
{
    //Your code here
    vector<int> arr;
    for(int i=1; i<=n; i++) {
        arr.push_back(i);
    }
    helper(0, arr, k);
    return arr[0];
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << josephus(n, k) << endl;
}
