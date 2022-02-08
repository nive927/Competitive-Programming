#include <bits/stdc++.h>
using namespace std;

int stringToNumber(char input[]) {
    // Write your code here
    int ws = 0;
    for(int i = 0; input[i] != '\0'; i++)
    {
        ws++;
    }
    
    if(ws == 1)
        return (input[0] - '0');
    
    int y = stringToNumber(input + 1);
    
    int x = input[0] - '0';
    
    int multiplier = 10;
    for(int i = 1; i < ws - 1; i++)
    {
        multiplier *= 10;
    }
    
    x = x * multiplier + y;
	return x;
}

int main() {
    char input[] = "00001231";

    cout << input << endl;
    cout << stringToNumber(input) << endl;

    cout << endl;

    strcpy(input, "12567");
    cout << input << endl;
    cout << stringToNumber(input) << endl;
}