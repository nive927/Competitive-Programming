#include <bits/stdc++.h>

using namespace std;

string is_palindrome(int n)
{
    // Code here.
    string n_IS_PALINDROME = "Yes";
    string n_NOT_PALINDROME = "No";
    int last_digit, new_n = 0, old_n = n;
    
    // Edge cases:
    // case 1: 0
    // case 2: negative numbers

    while(n != 0)
    {
        last_digit = n % 10;
        new_n = new_n * 10 + last_digit;
        n = n / 10;
    }
    
    if(new_n == old_n)
        return n_IS_PALINDROME;
    else
        return n_NOT_PALINDROME;
}

int main()
{

    cout << "Is 555 a palindrome? " << is_palindrome(555) << endl;
    cout << "Is -1 a palindrome? " << is_palindrome(-1) << endl;
    cout << "Is 0 a palindrome? " << is_palindrome(0) << endl; 
    cout << "Is 0 a palindrome? " << is_palindrome(978027597) << endl;    

    return 0;
}

