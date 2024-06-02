class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // this works like storing in a python dictionary - see editorial python solution
        // https://stackoverflow.com/questions/27674009/c-equivalent-of-python-dictionaries
        unordered_map<int, int> cache;
        vector<int> sol;

        for (int i = 0; i < nums.size(); ++i)
        {

            // calculate the value that needs to present in the nums vector
            // if the current value is a possible solution of the 2 sum
            int needed_num = target - nums[i];
            
            // check if the cache CONTAINS the other number (target sum)
            // as the KEY
            if (cache.contains(needed_num))
            {
                // RETURN
                // construct the solution acc. to the required format
                // from the problem description
                sol.push_back(cache[needed_num]);
                sol.push_back(i);
                return sol;
            }
            else
            {
                // Store the current number in the cache
                // with its index for constructing the answer
                // for return
                cache[nums[i]] = i;
                // cache.insert(make_pair(nums[i], i));
            }
        }

        return sol;


        // // BRUTE FORCE SOLUTION
        // vector<int> sol;

        // for(int i=0; i<nums.size() - 1; i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i] + nums[j] == target)
        //         {
        //             sol.push_back(i);
        //             sol.push_back(j);

        //         }
        //     }
        // }

        // return sol;
        
    }
};