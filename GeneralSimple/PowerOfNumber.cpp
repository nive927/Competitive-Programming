#include<iostream>
using namespace std;

int power(int x, int n) {
	if(n == 0)
    	return 1;

    int temp = power(x, n / 2);

    if(n % 2 == 0)
        return temp * temp;

    else
    {
        if(n > 0)
            return temp * temp * x;
        else
            return (temp * temp) / x;
	}
}

int main(){
    int x, n;
    cin >> x >> n;

    cout << power(x, n) << endl;
}
