#include <iostream>
using namespace std;

int countZeros(int n) {
	if(n == 0)
        return 1;

    // to handle the leading zeroes
    if(n < 10)
        return 0;

    return ((n % 10 == 0) ? 1 : 0) + countZeros(n / 10);
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
