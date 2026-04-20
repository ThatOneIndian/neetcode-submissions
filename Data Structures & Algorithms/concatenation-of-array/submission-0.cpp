class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> newArr = nums;
        for(int i = 0; i < nums.size(); i++) {
            newArr.push_back(nums.at(i));
        }

        return newArr;
    }
};