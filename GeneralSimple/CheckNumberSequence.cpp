#include<iostream>
using namespace std;

/*
You are given S a sequence of n integers i.e. S = s1, s2, ..., sn.
Compute if it is possible to split S into two parts : s1, s2, ..., si
and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the
first part is strictly decreasing while the second is strictly increasing.
Sequence made up of only increasing numbers or
only decreasing numbers is a valid sequence.
So in both the cases, print true.
You just need to print true/false.
No need to split the sequence.
*/

int main() {
	// Write your code here
	int prev, curr, n, count = 1, diff;
    cin >> n;
    cin >> prev;
    bool increasing = false;
    bool isValid = true;

    while(count < n)
    {
        cin >> curr;

        diff = curr - prev;

        if(diff == 0)
        {
            isValid = false;
        }

        else if(diff > 0)
        {
            increasing = true;
        }

        else if(increasing && diff < 0)
        {
            isValid = false;
        }

        prev = curr;
        count++;
    }

    if(isValid)
        cout << "true" << endl;

    else
        cout << "false" << endl;
}
