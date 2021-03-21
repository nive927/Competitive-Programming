#include<iostream>
using namespace std;

/*
1
23
345
4567
*/

int main()
{
    int N;
    cin >> N;

    int k = 1;

    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << k++;
        }

        cout << "\n";
        k = i + 1;
    }
}
