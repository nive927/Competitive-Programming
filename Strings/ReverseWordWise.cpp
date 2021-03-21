#include <iostream>
using namespace std;

void reverse(char input[], int start, int end)
{
	while(start < end)
	{
		std::swap(input[start++], input[end--]);
	}
}

void reverseStringWordWise(char input[]) {

    int previousSpaceIndex = -1;
    int i;

    for(i=0; input[i] != '\0'; i++)
    {
		if(input[i] ==' ')
		{
			reverse(input, previousSpaceIndex + 1, i - 1);
			previousSpaceIndex = i;
		}
	}

	reverse(input, previousSpaceIndex + 1, i - 1);
	reverse(input, 0, i - 1);
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
