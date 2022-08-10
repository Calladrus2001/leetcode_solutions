class Solution {
public:
    
    vector<int> arr;
    
    vector<vector<int>> subsetsWithDup(vector<int>& array) {
        vector<vector<int>> ans;
        sort(array.begin(), array.end());
        Helper(0, array, ans);
        return ans;
    }
    
    void Helper(int idx, vector<int> array, vector<vector<int>> &ans){
        ans.push_back(arr);
        for (int i = idx; i < array.size(); i++){
            if (i > idx && array[i] == array[i-1]) continue;
            arr.push_back(array[i]);
            Helper(i+1, array, ans);
            arr.pop_back();
        }
    }
};