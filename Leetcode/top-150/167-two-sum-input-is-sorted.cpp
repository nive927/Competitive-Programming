class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int front = 0;
        int back = numbers.size() - 1;

        while (front < back) {

            int sum = numbers[front] + numbers[back];

            if (sum == target) {
                return {front  + 1, back + 1};
            } else if (sum < target) {
                front++;
            } else {
                back--;
            }
        }

        return {-1, -1};
        
    }
};