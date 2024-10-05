// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int first = arr[0];
    int second = arr[1];
    
    if (second < first) { swap(second, first); } 
    
    for(int i=2; i<arr.size(); i++) {
        
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        }
    }
    
    cout << second << endl;
    cout << first << endl;

    return 0;
}