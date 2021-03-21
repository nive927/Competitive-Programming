#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int ws = strlen(input1);
    // only 26 alphabets in english
    int count[1000000] = {0};
    int i;

    /* for every character as index in count
    the value is incremented from one string
    and decremented from the other to check
    presence of that character
    If the two strings are permutations of one another,
    the final count array should be only zeroes and of the same length
    */
    for(i=0; input1[i] && input2[i]; i++)
    {
        count[input1[i]]++;
        count[input2[i]]--;
    }

    /*to check that both the strings were of the same length*/
    if(input1[i] || input2[i])
        return false;

    /*checking if any count is not 0*/
    for(i=0; i<1000000; i++)
    {
        // if not zero, then, not a permuatation
        if(count[i])
            return false;
    }

    // success
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}