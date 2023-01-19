#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int n=4;
    int k=65;
    int space=n-1;

    for(i = 1; i<=n; i++)
    {
        for(j=1; j<=space; j++)
        {
            cout << " ";
        }
        for(j=1; j<=i; j++)
        {
            cout << (char)(k+j-1);
        }
        for(j=i-2; j>=0; j--)
        {
            cout << (char)(k+j);
        }
        space--;
        cout << endl;
    }
    return 0;
}