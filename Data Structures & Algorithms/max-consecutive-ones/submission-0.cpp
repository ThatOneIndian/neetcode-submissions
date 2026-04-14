class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int highest = 0;


        for (int i = 0; i < nums.size(); i++) {
            if(nums.at(i) == 1) {
                count++;
                if (highest < count) { highest = count; }
            } else {

                count = 0;
            }
        }

        return highest;
    }
};