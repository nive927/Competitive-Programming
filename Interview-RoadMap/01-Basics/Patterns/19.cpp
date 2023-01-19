#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int i, j;
    int space;

    space=0;

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }
        for(j=1; j<=space; j++)
        {
            cout << " ";
        }
        for(j=i; j>=1; j--)
        {
            cout << "*";
        }
        space+=2;
        cout << endl;
    }

    space = 2*n-2;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }
        for(j=space; j>=1; j--)
        {
            cout << " ";
        }
        for(j=i; j>=1; j--)
        {
            cout << "*";
        }
        space-=2;
        cout << endl;
    }
    return 0;
}