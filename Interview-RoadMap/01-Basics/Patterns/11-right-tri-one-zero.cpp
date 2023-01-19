#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int n=4;

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            if (i%2!=0)
                cout << (j%2);
            else
                cout << ((j-1)%2);
        }
        cout << endl;
    }
    return 0;
}

// Try doing it using a start variable