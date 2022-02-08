#include <bits/stdc++.h>
using namespace std;

// Change in the given string itself. So no need to return or print anything
void removeX(char input[]) {
    // Write your code here
    if(input[0] == '\0')
        return;
    
    if(input[0] != 'x')
    {
        removeX(input + 1);
    }
    
    else
    {
        int i=1;
        for(; input[i] != '\0'; i++)
            input[i - 1] = input[i];
        
        input[i - 1] = '\0';
        removeX(input);
    }

}


int main() {
    // char input[10000];
    // cin.getline(input, 10000);

    char input [] = "axc";

    cout << input << endl;
    removeX(input);
    cout << input << endl;

    strcpy(input, "xxx");

    cout << endl;
    cout << input << endl;
    removeX(input);
    cout << input << endl;
}