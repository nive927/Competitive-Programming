class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int front = 0;
        int back = nums.size() - 1;
        int count = 0;

        // NOTE:
        // Here it needs to be front <= back to handle the following edge case:
        // nums = [1] val = 1 --> will FAIL if while loop condition is (i<j)
        while (front <= back) {

            if ((nums[front] == val && (nums[back] != val))) {

                // std::swap - convinient
                swap(nums[front], nums[back]);
                back--;
                front++;

                count++;
            }
            
            if(nums[front] != val) {
                front++;
            }

            if(nums[back] == val) {
                back--;

                count++;
            }
        }

        return (nums.size() - count);
        
    }
};