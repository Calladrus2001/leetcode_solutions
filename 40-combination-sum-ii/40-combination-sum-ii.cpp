class Solution {
public:
    
    vector<int> arr;
    
    vector<vector<int>> combinationSum2(vector<int>& array, int target) {
        sort(array.begin(), array.end());
        vector<vector<int>> ans;
        Helper(0, array, ans, target);
        return ans;
    }
    
    void Helper(int idx, vector<int> array, vector<vector<int>> &ans, int target){
        if (target == 0){
            ans.push_back(arr);
            return;
        }
        for (int i = idx; i < array.size(); i++){
            if (i > idx && array[i] == array[i-1]) continue;
            if (array[i] > target) break;
            
            arr.push_back(array[i]);
            Helper(i+1, array, ans, target - array[i]);
            arr.pop_back();
        }
    }
};