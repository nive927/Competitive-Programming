#include <iostream>
using namespace std;

bool checkPalindrome(char input[]) {
    int n = 0;
    for(int i = 0; input[i] != '\0'; i++)
        n++;

    if(n == 0 || n == 1)
        return true;

	if(input[0] != input[n - 1])
        return false;

    input[n - 1] = '\0';
    return checkPalindrome(input + 1);

}

int main() {
    char input[50];
    cin >> input;

    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
