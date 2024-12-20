#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<string> s = {"act","pots","tops","cat","stop","hat"};

    // sorting
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

    return 0;

}