
#include <bits/stdc++.h>

using namespace std;

string armstrongNumber(int n){
// code here
long long sum = 0;
int input = n, last_digit;

while(input != 0)
{
    last_digit = input % 10;
    sum += (last_digit * last_digit * last_digit);
    
    input /= 10;
}

if(sum == n)
    return "Yes";
return "No";
    
}

int main()
{
    int n1 = 371, n2 = 435;

    cout << "Are the following numbers Armstrong numbers?" << endl;
    cout << n1 << " : " << armstrongNumber(n1) << endl;
    cout << n2 << " : " << armstrongNumber(n2) << endl;

    return 0;
}