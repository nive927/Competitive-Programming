#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n=5;

    for(i=n; i>=1; i--) {
        for (j=i; j>=1; j--) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}