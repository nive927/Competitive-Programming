#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {

    // write code to extract out all the subarrays
    vector<vector<int>> subarrays;
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i; j < nums.size(); ++j) {
            vector<int> subarray;
            for (int k = i; k <= j; ++k) {
                subarray.push_back(nums[k]);
            }
            subarrays.push_back(subarray);
        }
    }
    // For debugging purposes, you can print the subarrays
    for (const auto& subarray : subarrays) {
        for (int num : subarray) {
            cout << num << " ";
        }
        cout << endl;
    }

    
}

int main () {

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};


    maxSubArray(nums);
    
    return 0;
}