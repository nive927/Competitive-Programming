#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int n=4;
    int space = 2*n-2;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << j;
        }
        for(j=1; j<=space; j++)
        {
            cout << " ";
        }
        for(j=i; j>=1; j--)
        {
            cout << j;
        }
        cout << endl;
        space-=2;
    }

    return 0;
}