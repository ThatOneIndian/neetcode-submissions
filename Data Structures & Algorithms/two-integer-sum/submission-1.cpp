class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mappedNums; 
        vector<int> sol;
        int difference;

        for ( int i = 0; i < nums.size(); i++ ) {
            difference = target - nums[i];

            if( mappedNums.count(difference) ) {
                sol.push_back(mappedNums[difference]);
                sol.push_back(i);
            } else {
                mappedNums[nums[i]] = i;
            }

        }
        return sol;
    }
};
