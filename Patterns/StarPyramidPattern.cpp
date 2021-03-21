#include<iostream>
using namespace std;

/*
   *
  ***
 *****
*******
*/
int main(){
    int N;
    cin >> N;

    int count = 1;

    for(int i=1; i<=N; i++)
    {
        for(int s=N-i; s>0; s--)
        {
            cout << " ";
        }

        for(int j=1; j<=count; j++)
        {
            cout << "*";
        }

        cout << "\n";
    	count += 2;
    }

}