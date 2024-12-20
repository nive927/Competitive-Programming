#include <bits/stdc++.h>
using namespace std;

int main() {

    // convert from character to ascii
    cout << "Character to ASCII: " << 'a' << " "<< (int)'a' << endl;

    // convert from ascii to character
    cout << "ASCII to Character: " << 97 << " "<< (char)97 << endl;

    // hashing trick: 0-25 for the 26 characters
    cout << "Character to ASCII: " << "a - a" << ": " << 'a' - 'a' << endl;
    cout << "Character to ASCII: " << "z - a" << ": " << 'z' - 'a' << endl;


    return 0;

}