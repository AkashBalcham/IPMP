#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> arr1, vector<int> arr2) {
    int n=arr1.size(), m = arr2.size();
    vector<int> res;
    int i=0, j=0;
    while(i<n and j<m) {
        if (arr1[i] == arr2[j]) {
            res.push_back(arr1[i]);

            int newI = i+1;
            while(newI < n and arr1[newI] == arr1[i]) newI++;
            i = newI++;

            int newJ = j+1;
            while(newJ < m and arr2[newJ] == arr2[j]) newJ++;
            j = newJ++;

        } else if (arr1[i] < arr2[j]) {
            res.push_back(arr1[i]);
            int newI = i+1;
            while(newI < n and arr1[newI] == arr1[i]) newI++;
            i = newI++;
            
        } else {
            res.push_back(arr2[j]);
            int newJ = j+1;
            while(newJ < m and arr2[newJ] == arr2[j]) newJ++;
            j = newJ++;
        }
    }
    while(i<n) {
        res.push_back(arr1[i]);
        int newI = i+1;
        while(newI < n and arr1[newI] == arr1[i]) newI++;
        i = newI;
    }
    while(j<m) {
        res.push_back(arr2[j]);
        int newJ = j+1;
        while(newJ < m and arr2[newJ] == arr2[j]) newJ++;
        j = newJ;
    }
    return res;
}

int main() {
    vector<int> arr1 = {13, 17, 18, 19, 20, 22, 22, 27, 36, 39, 46, 48, 50};
    vector<int> arr2 = {4, 12, 45};
    vector<int> res = findUnion(arr1, arr2);
    for(int i: res) {
        cout << i << " ";
    }
    cout << endl;
}