#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    int start = 0;
    int end = size - 1;

    while(start < end)
    {
        if(input[start] == 1)
        {
            int t = input[start];
            input[start] = input[end];
            input[end] = t;

            end--;
        }

        else
        	start++;
    }
}

int main()
{
	int size;

	cin >> size;
	int *input = new int[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}

	sortZeroesAndOne(input, size);

	for (int i = 0; i < size; ++i)
	{
		cout << input[i] << " ";
	}

	cout << endl;
	delete[] input;


	return 0;
}