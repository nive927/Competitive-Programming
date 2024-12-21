#include <iostream>
using namespace std;

void insertionSort(int *input, int size)
{
    //Write your code here
    for(int i=1; i<size; i++)
    {
		// current item for insert
        int key = input[i]; 

		// end index for the sorted list - from the beginning
        int j = i-1;

		// if the current item is less than anything in the sorted part
		// move everything in the sorted to the right - key will be overwritten by j+1, so you need to store it
		// insert the key at the right place
        while((key < input[j]) && (j>=0))
        {
                input[j+1] = input[j];
                j--;
        }


        input[j+1] = key;
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

	insertionSort(input, size);

	for (int i = 0; i < size; i++)
	{
		cout << input[i] << " ";
	}

	delete[] input;
	cout << endl;


	return 0;
}