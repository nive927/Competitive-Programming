#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int n=5;

    for(i = 1; i<=n; i++)
    {
        int k=65+n-i;

        for(j=1; j<=i; j++)
        {
            cout << (char)(k++);
        }
        cout << endl;
        
    }
    return 0;
}