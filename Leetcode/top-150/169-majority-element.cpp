class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int count = 0;
        int majority;

        // Boyer-Moore Algorithm
        // Assign the first ele nums[0] and start counting its occurence
        // +1 if you see it, -1 if you see something else
        // if count becomes 0, set the current number as the new majority to count for
        // only the majority will end up with a non-zero count
        // NOTE: this count is not the actual number of occurrences - it is only for finding the majority

        for (int num : nums) {
            if (count == 0) {
                majority = num;
            }
            
            if (num == majority) count++;
            else if (num != majority) count--;
        }

        return majority;  
        
    }
};