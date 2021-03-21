#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    //Write your code here
    //Read the GCD method for efficiency

//     Reverse the entire array
   for(int i=0, j=n-1; i<n/2; i++, j--)
   {
       int t = input[i];
       input[i] = input[j];
       input[j] = t;
   }

//     Reverse the first n-d elements
	for(int i=0, j=n-d-1; i<(n-d)/2; i++, j--)
    {
    	int t = input[i];
        input[i] = input[j];
        input[j] = t;
    }

//     Reverse the last d elements
    for(int i=n-d, j=n-1; i<j; i++, j--)
    {
    	int t = input[i];
        input[i] = input[j];
        input[j] = t;
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

	int d;
	cin >> d;

	rotate(input, d, size);

	for (int i = 0; i < size; ++i)
	{
		cout << input[i] << " ";
	}

	delete[] input;
	cout << endl;

	return 0;
}