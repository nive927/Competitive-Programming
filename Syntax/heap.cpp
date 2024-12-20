#include<bits/stdc++.h>
using namespace std;

// Function to show the priority queue - need to pop() - DON'T SKIP
void showpq(
    priority_queue<int, vector<int>, greater<int> > g)
{
    while (!g.empty()) {
        cout << ' ' << g.top();
        g.pop();
    }
    cout << '\n';
}

void showArray(int* arr, int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

// Driver Code
int main()
{
    int arr[6] = { 10, 2, 4, 8, 6, 9 };

    // MIN HEAP (default MAX HEAP) 
    // the first argument is the type of each element in the heap
    // the second argument is the container used to store the elements (default is vector)
    // the third argument is the comparator function (default is max heap)
    priority_queue<int, vector<int>, greater<int> > gquiz(
        arr, arr + 6);

    cout << "Array: ";
      showArray(arr, 6);

    cout << "Priority Queue : ";
    showpq(gquiz);

    return 0;
}