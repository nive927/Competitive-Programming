#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> s = {12, 6, 55, 9, 10, 2};

    cout << "BEFORE: ";
    for(auto n: s) {
        cout << n << " ";
    }
    cout << endl;
    for(int i=1; i<s.size(); i++)
        {
            int key = s[i]; 
            int j = i-1;

            while((key < s[j]) && (j>=0))
            {
                    s[j+1] = s[j];
                    j--;
            }

            s[j+1] = key;
        }

    cout << "AFTER: ";
    for(auto n: s) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}