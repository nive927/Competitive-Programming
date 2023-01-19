#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int n=5;
    int k=1;
    for(i = 0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
    return 0;
}