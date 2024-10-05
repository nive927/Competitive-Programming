
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int> &arr)
{
    //Write your code here
    
    for(int i=0; i<arr.size(); i++) {
        
        for(int j=0; j<arr.size() - i - 1; j++) {
            
            if (arr[j] > arr[j+1]) { swap(arr[j], arr[j+1]); }
        }
        
    }
    
}

int main()
{

    vector<int> arr = {13,46,24,52,20,9};
    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Selection sort
    bubbleSort(arr);

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}

// // MANUAL INPUT
// #include <iostream>
// using namespace std;

// void bubbleSort(int *input, int size)
// {
//     //Write your code here
//     for(int i=0; i<size; i++)
//     {
//         for(int j=0; j<size-i-1; j++)
//         {
//             if(input[j]>input[j+1])
//             {
//                 int temp = input[j];
//                 input[j] = input[j+1];
//                 input[j+1] = temp;
//             }
//         }
//     }
// }

// int main()
// {

// 	int size;
// 	cin >> size;	

// 	int *input = new int[size];

// 	for (int i = 0; i < size; ++i)
// 	{
// 		cin >> input[i];
// 	}

// 	bubbleSort(input, size);

// 	for (int i = 0; i < size; ++i)
// 	{
// 		cout << input[i] << " ";
// 	}

// 	delete[] input;
// 	cout << endl;
// }