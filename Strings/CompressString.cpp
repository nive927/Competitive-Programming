#include <iostream>
#include <cstring>
using namespace std;

void stringCompression(char input[]) {
    // Write your code here
    int ws = strlen(input);
    int j = 0;
    for(int i=0; i<ws; i++)
    {
        int count = 1;

        while((i < ws) && (input[i] == input[i+1]))
        {
        	count++;
            i++;
        }

        input[j++] = input[i];

        if(count > 1)
        	input[j++] = count + '0';
    }

    input[j] = '\0';
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    stringCompression(str);
    cout << str;
}