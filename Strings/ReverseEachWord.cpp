#include <iostream>
#include <cstring>
using namespace std;

void reverse(char input[], int start, int end)
{
    while(start < end)
    {
        std::swap(input[start++], input[end--]);
    }
}

void reverseEachWord(char input[]) {
    // Write your code here

    int prev_space_index = -1;
    int i;

    for(i = 0; input[i] != '\0'; i++)
    {
        if(input[i] == ' ')
        {
            reverse(input, prev_space_index + 1, i - 1);
            prev_space_index = i;
        }

    }

    reverse(input, prev_space_index + 1, i - 1);
    // reverse(input, 0, i - 1);
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}