#include <bits/stdc++.h>

using namespace std;

int evenlyDivides(int N){
        //code here
        
        int last_digit;
        int count = 0;
        int original_number = N;
        
        while( N>0 )
        {
            // cout << endl << "N: " << N << endl;
            last_digit = N % 10;
            // cout << "last_digit: "<< last_digit << endl;
            if (last_digit != 0 && original_number % last_digit == 0)
            {
                // cout << "N \% last_digt: " << N % last_digit << endl;
                count++;
                // cout << "count: " << count << endl;
            }
            N = N / 10;
            
        }
        return count;
}

int main()
{
    int N = 10;

    cout << "evenlyDivides(10) count: " << evenlyDivides(N) << endl;

    return 0;
}