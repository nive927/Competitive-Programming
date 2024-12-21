#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> s = {12, 6, 55, 9, 10, 2};

    cout << "BEFORE: ";
    for(auto n: s) {
        cout << n << " ";
    }
    cout << endl;
    

    // bucket sort
    vector<int> bucket(100, 0);

    // NOTE: not a map but a count vector
    // index equal to the element - IMPORTANT
    // NOTE: this is why it doesn't work for large numbers or negative numbers
    for(auto n: s) {
        bucket[n]++;
    }

    int index = 0;
    for(int i=0; i<100; i++) { // reverse tje bucket for DESC
        for(int j=0; j<bucket[i]; j++) {
            s[index++] = i;
        }
    }


    cout << "AFTER: ";
    for(auto n: s) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}