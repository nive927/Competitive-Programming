#include <bits/stdc++.h>

using namespace std;

// helper function to get gcd of two numbers.
long long gcd(long long a , long long b)
{
    if(a == 0)
        return b;
    return gcd(b%a, a);
}
vector<long long> lcmAndGcd(long long A , long long B) {
    
    vector<long long> arr(2);
    
    long long g = gcd(A,B);   // gcd of two numbers.
    long long l = (A*B)/g;    // product of 2 numbers divided by their gcd gives their lcm.
    
    arr[0] = l;
    arr[1] = g;
    
    return arr;
}

int main()
{
    long long A, B;
    vector <long long> ans;

    A = 100;
    B = 9; 

    ans = lcmAndGcd(A , B);

    cout << "The LCM and GCD of A and B are " << ans[0] << " and " << ans[1] << " respectively.";

    return 0;
}