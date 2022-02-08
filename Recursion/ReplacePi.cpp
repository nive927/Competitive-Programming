#include <iostream>
#include <string.h>
using namespace std;

// Change in the given string itself. So no need to return or print anything
void replacePiHelper(char input[], int start)
{
 
    // Base condition
    // if the string is empty
    // or of length one
    if (input[start] == '\0' || input[start + 1] == '\0') {
        return;
    }
 
    // Getting the answer from
    // recursion for the smaller
    // problem
    replacePiHelper(input, start + 1);
 
    // Small calculation part
    // if the first character is 'p'
    // and the first character of the part
    // passed to recursion is 'i' then replace
    // "pi" with "3.14"
    if (input[start] == 'p' && input[start + 1] == 'i') {
 
        // Shifting the characeters to
        // right side to put 3.14 in
        // the character array
        int ws = 0;
        for(int i = 0; input[i] != '\0'; i++)
            ws++;
        
        for (int i = ws; i >= start + 2; i--) {
            input[i + 2] = input[i];
        }
 
        // Replacing with "3.14"
        input[start] = '3';
        input[start + 1] = '.';
        input[start + 2] = '1';
        input[start + 3] = '4';
    }
}


void replacePi(char input[]) {
	// Write your code here
	replacePiHelper(input, 0);
}

int main() {
    // char input[10000];
    // cin.getline(input, 10000);

    char input [] = "xpix";

    cout << input << endl;
    replacePi(input);
    cout << input << endl;

    strcpy(input, "pipi");

    cout << endl;
    cout << input << endl;
    replacePi(input);
    cout << input << endl;
}