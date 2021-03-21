#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    // Write your code here
    int count[256] = {0};

    int ws = strlen(input);
    int max_freq = -1;

    for(int i=0; i<ws; i++)
    {
        count[input[i]]++;
        if(max_freq < count[input[i]])
        {
            max_freq = count[input[i]];
        }
    }

    for(int i=0; i<ws; i++)
    {
        if(count[input[i]] == max_freq)
        {
            return input[i];
        }
    }

}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}