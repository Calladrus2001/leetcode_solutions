class Solution {
public:
    
    vector<int> arr;
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        Helper(0, nums, ans);
        return ans;
    }
    
    void Helper(int idx, vector<int> array, vector<vector<int>> &ans){
        if (idx >= array.size()){
            ans.push_back(arr);
            return;
        }
        arr.push_back(array[idx]);
        Helper(idx + 1, array, ans);
        arr.pop_back();
        Helper(idx + 1, array, ans);
    }
};