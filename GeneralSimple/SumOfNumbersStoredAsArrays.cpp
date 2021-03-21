#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    int i = size1 - 1;
    int j = size2 - 1;
    int k = (size1 > size2) ? size1: size2;
    int carry = 0, sum = 0;

    while (i>=0 && j>=0)
    {
        sum = input1[i--] + input2[j--] + carry;
        output[k--] = (sum % 10);
        carry = sum / 10;
    }

    while (i >= 0)
    {
        sum = input1[i--] + carry;
        output[k--] = (sum % 10);
        carry = sum / 10;
    }

    while (j >= 0)
    {
        sum = input2[j--] + carry;
        output[k--] = (sum % 10);
        carry = sum / 10;
    }

    if(carry)
        output[k] = carry;
}

int main()
{
	int size1;
	cin >> size1;

	int *input1 = new int[size1];

	for (int i = 0; i < size1; ++i)
	{
		cin >> input1[i];
	}

	int size2;
	cin >> size2;

	int *input2 = new int[size2];

	for (int i = 0; i < size2; ++i)
	{
		cin >> input2[i];
	}

	int outsize = 1 + max(size1, size2);

	int *output = new int[outsize];

	sumOfTwoArrays(input1, size1, input2, size2, output);

	for (int i = 0; i < outsize; ++i)
	{
		cout << output[i] << " ";
	}

	delete[] input1;
	delete[] input2;
	delete[] output;
	cout << endl;


	return 0;
}