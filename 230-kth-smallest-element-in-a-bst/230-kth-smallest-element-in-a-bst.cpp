/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> values;
        Inorder(root, values);
        return values[k-1];
    }
    
    void Inorder(TreeNode *root, vector<int> &nums){
        if (root == nullptr) return;
        Inorder(root->left, nums);
        nums.push_back(root->val);
        Inorder(root->right, nums);
    }
};