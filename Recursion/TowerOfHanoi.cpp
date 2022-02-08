#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Write your code here
    if (n == 0)
    {
        return;
    }
    
	if (n == 1)
    {
        cout << source << " " << destination << "\n";
        return;
    }
    
    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << source << " " << destination << "\n";
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n = 3;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << n << "\n";
    towerOfHanoi(n, 'a', 'b', 'c');
}
