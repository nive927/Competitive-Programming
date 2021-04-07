#include<iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {
    if(size == 0)
        return -1;

    if(input[0] == x)
    {
        int i = lastIndex(input + 1, size - 1, x);
        return i == -1 ? 0 : i + 1;
    }

    else
    {
        int i = lastIndex(input + 1, size - 1, x);
        return i == -1 ? i : i + 1;
    }

}


int main(){
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int x;

    cin >> x;

    cout << lastIndex(input, n, x) << endl;

}


