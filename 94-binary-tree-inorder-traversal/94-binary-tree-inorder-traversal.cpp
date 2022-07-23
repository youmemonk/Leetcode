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
private:
    void helperInorder(TreeNode* root, vector<int>& ans){
        if(!root) return;
        
        helperInorder(root->left, ans);
        ans.push_back(root->val);
        helperInorder(root->right, ans);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        helperInorder(root, ans);
        return ans;
    }
};