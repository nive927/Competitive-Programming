// int low = 2;
// int high = x / 2 + 1; // high should be inclusive for the size of the vector

// vector<int> a(high - low); // Correct size

//         // Fill the vector starting from 2
//         iota(a.begin(), a.end(), 2);

//         // Print the elements of the vector
//         for (int num : a) {
//             cout << num << " ";
//         }
//         cout << endl;

class Solution {
public:
    int mySqrt(int x) {
        
        if (x == 0 || x == 1) {
            return x;
        }

        long num;
        long mid; // very important to avoid overflow - large input x

        int low = 2;
        int high = x / 2;
        
        while (low <= high) {

            mid = low + (high - low) / 2; // also avoids overflow due to data type
            num = mid * mid;
            
            if (num == x) return mid;

            if (num > x)
                high = mid - 1;
            else if (num < x)
                low = mid + 1;
        }
        
        return high;
    }
};