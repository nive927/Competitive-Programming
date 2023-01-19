#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n=5;
    int space=n-1;
    int count=1;

    for(i=1; i<=n; i++)
    {
        for(j=0; j<space; j++)
        {
            cout << " ";
        }
        for(j=0; j<count; j++)
        {
            cout << "*";
        }
        cout << endl;
        space--;
        count+=2;
    }
    
    space=0;
    count=2*n-1;

    for(i=1; i<=n; i++)
    {
        for(j=0; j<space; j++)
        {
            cout << " ";
        }
        for(j=0; j<count; j++)
        {
            cout << "*";
        }
        cout << endl;
        space++;
        count-=2;
    }

    return 0;
}