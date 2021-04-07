#include<iostream>
using namespace std;

void print(int n){
    if(n == 1){
        cout << n << " ";
        // if this return statement is commented, runtime error pops up, the return statement is ver y
        return;
    }
    print(n - 1);
    cout << n << " ";
}

int main(){
    int n;
    cin >> n;

    print(n);
}