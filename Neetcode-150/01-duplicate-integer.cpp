class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        // you can just use a set to check for membership
        // to check if you've encountered the val before
        // it is a set not a map<int, int>
        unordered_set<int> cache;

        for(int i=0; i<nums.size(); i++) {
            // contains is not a member function
            // you can also do (cache.find(nums[i]) I= cache.end())
            // but it is too long and hard to remember
            if (cache.count(nums[i])) return true;

            // how to insert into an unordered_set??
            cache.insert(nums[i]);
        }
        return false;
    }
};
