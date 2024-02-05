#include <bits/stdc++.h>
using namespace std;


int Merge(int arr[], int arr2[], int left, int mid, int right) {
    int i, j, k;
    int count = 0;
    i=left; j=mid; k=left;
    while(i <= mid-1 and j <= right) {
        if (arr[i] <= arr[j]) {
            arr2[k++] = arr[i++];
        } else {
            arr2[k++] = arr[j++];
            count += (mid - i);
        }
    }
    while(i <= mid-1) {
        arr2[k++] = arr[i++];        
    }
    while(j <= right) {
        arr2[k++] = arr[j++];
    }
    for(i=left; i<=right; i++) {
        arr[i] = arr2[i];
    }
    return count;
}

int mergeSort(int arr[], int arr2[], int left, int right) {
    int mid, count = 0;
    if (right > left) {
        mid = (left + right) >> 1;
        count += mergeSort(arr, arr2, left, mid);
        count += mergeSort(arr, arr2, mid+1, right);
        count += Merge(arr, arr2, left, mid+1, right);
    }
    return count;
}

int main() {
    int arr[] = {1, 34, 5, 19, 20};
    int n = sizeof(arr) / sizeof(int);
    int temp[n];
    cout << mergeSort(arr, temp, 0, n-1) << endl;
}