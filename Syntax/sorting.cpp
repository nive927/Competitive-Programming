#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<string> s = {"act","pots","tops","cat","stop","hat"};

    // sorting - ascending
    cout << "Before sorting: ";
    for (auto &str : s) {
        cout << str << " ";
    }
    cout << endl;

    for(auto &str : s) {
        sort(str.begin(), str.end());
    }

    cout << "After sorting: ";
    for (auto &str : s) {
        cout << str << " ";
    }

    // sorting - descending
    cout << "\n\nBefore sorting: ";
    for (auto &str : s) {
        cout << str << " ";
    }
    cout << endl;

    for(auto &str : s) {
        sort(str.rbegin(), str.rend());
    }

    cout << "After sorting: ";
    for (auto &str : s) {
        cout << str << " ";
    }

    return 0;

}