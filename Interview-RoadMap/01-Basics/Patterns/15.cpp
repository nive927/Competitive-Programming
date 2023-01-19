#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int n=5;
    int k;
    for(i = 5; i>=1; i--)
    {
        k = 65;

        for(j=1; j<=i; j++)
        {
            cout << (char)k++ << " ";
        }
        cout << endl;
    }
    return 0;
}