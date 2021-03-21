#include<iostream>
using namespace std;

/*
A
BC
CDE
DEFG
*/

int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    int n;
    char ch = 'A', t;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        t = ch;
        for(int j=1; j<=i; j++)
        {
            cout << ch++;
        }

        cout << "\n";
        ch = t + 1;
    }
}