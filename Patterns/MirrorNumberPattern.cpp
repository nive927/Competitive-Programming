#include<iostream>
using namespace std;

/*
   1
  12
 123
1234
*/

int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int s=n-i; s>=1; s--)
        {
            cout << " ";
        }

        for(int j=1; j<=i; j++)
        {
            cout << j;
        }

        cout << "\n";
    }

}