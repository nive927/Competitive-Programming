#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
    //Write your code here
    int non_zero = 0;
    for(int i=0; i<size; i++)
    {
        if(input[i] != 0)
        {
            int t = input[non_zero];
            input[non_zero] = input[i];
            input[i] = t;
            non_zero++;
        }
    }
}

int main()
{

	int size;

	cin >> size;
	int *input = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> input[i];
	}

	pushZeroesEnd(input, size);

	for (int i = 0; i < size; i++)
	{
		cout << input[i] << " ";
	}

	cout << endl;
	delete[] input;

	return 0;
}