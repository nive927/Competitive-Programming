/*
Instructions to run the code: (Environment is already set up on your Laptop)

g++ .\selection.cpp -o .\output.exe
.\output.exe

*/

#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &arr) {
    
    int ws = arr.size();

    for(int i=0; i<ws; i++) {
        
        int minIdx = i;
        
        for (int j=i+1; j<ws; j++) {
            if (arr[j] < arr[minIdx]) { minIdx = j; } 
        }
        
        swap(arr[minIdx], arr[i]);
    }

}

int main() {

    vector<int> arr = {13,46,24,52,20,9};
    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Selection sort
    selectionSort(arr);

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}