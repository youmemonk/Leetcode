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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        if(root->val == targetSum && root->left == NULL && root->right == NULL) return true;
        
        bool lst = hasPathSum(root->left, targetSum - root->val);
        bool rst = hasPathSum(root->right, targetSum - root->val);
            
        return lst || rst;
    }
};