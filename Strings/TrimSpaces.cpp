#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
    // Write your code
    int count = 0;

    for (int i = 0; input[i]; i++)
        if (input[i] != ' ')
            input[count++] = input[i];
    input[count] = '\0';
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

