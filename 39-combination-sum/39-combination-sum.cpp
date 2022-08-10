class Solution {
public:
    
    vector<int> arr;
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        Helper(0, candidates, ans,target);
        return ans;
    }
    
    void Helper(int idx, vector<int> array, vector<vector<int>> &ans, int target){
        if (idx >= array.size()){
            if (target == 0) {
                ans.push_back(arr);
            }
            return;
        }
        if (target >= array[idx]){
            arr.push_back(array[idx]);
            Helper(idx, array, ans, target - array[idx]);
            arr.pop_back();
        }
        Helper(idx + 1, array, ans, target);
        
    }
};