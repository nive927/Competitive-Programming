#include<iostream>
using namespace std;

/*
  *
 ***
*****
 ***
  *
*/


int main() {

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */

    int n, count = 1;
    cin>>n;

    for(int i=1; i<=n/2+1; i++)
    {
        for(int s=n/2-i+1; s>=1; s--)
        {
            cout<<" ";
        }

        for(int j=1; j<=count; j++)
        {
            cout<<"*";
        }

        count +=2;
        cout<<"\n";
    }

    count -= 4;

    for(int i=1; i<=n/2; i++)
    {
        for(int s=1; s<=i; s++)
        {
            cout<<" ";
        }

        for(int j=count; j>=1; j--)
        {
            cout<<"*";
        }
        count -= 2;
        cout<<"\n";
    }

}
