#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n=5;
    
    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }    

    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    } 

    return 0;
}