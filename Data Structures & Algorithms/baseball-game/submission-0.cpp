class Solution {
public:
    int calPoints(vector<string>& operations) {
        int prev1, prev2, sum, doubled;
        int val = 0;
        stack<int> nums;

        for(int i = 0; i < operations.size(); i++) {
            if(operations[i] == "+") {
                prev1 = nums.top();
                nums.pop();
                prev2 = nums.top();
                nums.push(prev1);
                sum = prev1 + prev2;
                nums.push(sum);
            } else if(operations[i] == "D") {
                doubled = nums.top() * 2;
                nums.push(doubled);
            } else if(operations[i] == "C") {
                nums.pop();
            } else {
                nums.push(stoi(operations[i]));
            }
        }

        while(!nums.empty()) {
            val += nums.top();
            nums.pop();
        }

        return val;
    }
};