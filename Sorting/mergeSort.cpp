#include <bits/stdc++.h>
using namespace std;

// void return - IMPORTANT
// addressing of arguments is IMPORTANT
void merge(vector<int>& arr, int s, int m, int e) {
    // Copy the sorted left & right halfs to temp arrays
    vector<int> L = {arr.begin() + s, arr.begin() + m + 1};
    vector<int> R = {arr.begin() + m + 1, arr.begin() + e + 1}; 

    int i = 0; // index for L
    int j = 0; // index for R
    int k = s; // index for arr

    while (i < L.size() && j < R.size()) {
        // <= - stability condition - preserves the order of elements during a tie
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    // One of the halfs will have elements remaining
    while (i < L.size()) {
        arr[k++] = L[i++];
    }
    while (j < R.size()) {
        arr[k++] = R[j++];
    }
}

// void return - IMPORTANT
// addressing of arguments is IMPORTANT
void mergeSort(vector<int>& arr, int s, int e) {

    // base case
    // if the array has 1 or 0 elements, you find it out using the start and end indices
    // you can also do
    // if (s >= e) { return; }

    // when arr is split into only single elements - base case
    if (e - s + 1 <= 1) { 
        return;
    }
    // The middle index of the array
    int m = s + (e - s)  / 2; // (s + e) / 2 can cause overflow

    // Sort the left half
    mergeSort(arr, s, m);

    // Sort the right half
    mergeSort(arr, m + 1, e);

    // Merge sorted halfs
    merge(arr, s, m, e);
}

int main() {

    vector<int> s = {12, 6, 55, 9, 10, 2};

    cout << "BEFORE: ";
    for(auto n: s) {
        cout << n << " ";
    }
    cout << endl;

    mergeSort(s, 0, s.size() - 1);

    cout << "AFTER: ";
    for(auto n: s) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}