#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int n=5;
    int space=2*n-2;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }
        for(j=1; j<=space; j++)
        {
            cout << " ";
        }
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space-=2;
    }
    space=2;
    for(i=n-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }
        for(j=1; j<=space; j++)
        {
            cout << " ";
        }
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space+=2;
    }
    return 0;
}