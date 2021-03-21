#include <iostream>
using namespace std;

/*
E
DE
CDE
BCDE
ABCDE
*/

int main()
{
    int i, j, n;

    cin >> n;

    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c",'A' + j-1);
        }
        printf("\n");
    }
    return 0;
}