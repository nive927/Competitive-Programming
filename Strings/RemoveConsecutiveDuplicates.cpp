#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int i, j;
    int ws = strlen(input);

    if(ws < 2)
        return;

    j = 0;
    for(i=1; i<ws; i++)
    {
        if(input[j] != input[i])
        {
            j++;
            input[j] = input[i];
        }
    }

    j++;
    input[j] = '\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}