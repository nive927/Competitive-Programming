// C++ Program to print rectangular
// inner reducing pattern
#include <bits/stdc++.h>
using namespace std;
  
#define max 100
  
// function to Print pattern
void print(int a[][max], int size) 
{
for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
    cout << a[i][j];
    }
    cout << endl;
}
}
  
// function to compute pattern
void innerPattern(int n) {
      
// Pattern Size
int size = 2 * n - 1;
int front = 0;
int back = size - 1;
int a[max][max];
while (n != 0) 
{
    for (int i = front; i <= back; i++) {
    for (int j = front; j <= back; j++) {
        if (i == front || i == back ||
            j == front || j == back)
        a[i][j] = n;
    }
    }
    ++front;
    --back;
    --n;
}
// finally print the pattern
print(a, size);
}
  
// Driver code
int main()
{
    // Input
    int n = 4; 
      
    // function calling
    innerPattern(n);
      
return 0;
}