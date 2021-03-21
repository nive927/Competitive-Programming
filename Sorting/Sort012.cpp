#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    //Write your code here
    // Read Dutch National Flag Algorithm OR 3-way Partitioning - USED HERE
    int lo = 0;
    int hi = n - 1;
    int mid = 0;

    int t;

    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch(arr[mid])
        {
            case 0:
                t = arr[lo];
                arr[lo] = arr[mid];
                arr[mid] = t;
                lo++;
                mid++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                t = arr[mid];
                arr[mid] = arr[hi];
                arr[hi] = t;
                hi--;
                break;
        }
    }
}

int main()
{
	int size;

	cin >> size;
	int *arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	sort012(arr, size);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;
	cout << endl;


	return 0;
}