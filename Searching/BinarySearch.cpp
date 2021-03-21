#include <iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int l = 0, r = n -1;
    int mid;

    while(l <= r)
    {
        mid = (l + r) / 2;
        if(input[mid] == val)
            return mid;

        else if(val > input[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }

    return -1;
}

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}

	int val;
	cin >> val;
	cout << binarySearch(input, size, val) << endl;


	delete [] input;
	return 0;
}