#include<iostream>
using namespace std;

long long power(long long x, unsigned long long y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int main() {
	// Write your code here

	long long x, n, ans;
    cin >> x >> n;

    ans = power(x, n);

    cout << ans;
}