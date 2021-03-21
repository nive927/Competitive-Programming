#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    //Write your code here
    int i, m1=-2147483648, m2=-2147483648, t;

    for(i=0; i<n; i++)
    {
        if(input[i] > m2 && input[i] != m1)
        {


            if(input[i] > m1)
            {
                m2 = m1;
                m1 = input[i];
            }

            else
            {
                m2 = input[i];
            }
        }
    }

    return m2;
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

	cout << findSecondLargest(input, size) << endl;

	delete[] input;


	return 0;
}