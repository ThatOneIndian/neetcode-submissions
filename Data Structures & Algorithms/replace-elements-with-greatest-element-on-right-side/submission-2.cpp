class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int highest = arr.back();

        for(int i = arr.size() - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = highest;
            if(temp > highest) { 
                highest = temp;
            } 

        }
        arr.pop_back();
        arr.push_back(-1);
        return arr;
    }
};