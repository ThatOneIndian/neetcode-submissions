class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int highest = arr.back();

        for(int i = arr.size() - 1; i >= 0; i--) {
            
            if(arr[i] < highest) { 
                arr[i] = highest;
            } else { highest = arr[i]; arr[i] = highest;}

        }
        arr.pop_back();
        arr.push_back(-1);
        return arr;
    }
};