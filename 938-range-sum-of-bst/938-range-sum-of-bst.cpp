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
    int rangeSum(TreeNode* root, int sum, int low, int high){
        if(!root) return 0;
        
        int ans = 0;
        if(root->val >= low && root->val <= high) ans += root->val;
        int leftSum = rangeSum(root->left, 0, low, high);
        int rightSum = rangeSum(root->right, 0, low, high);
        
        return (ans + leftSum + rightSum);
    }

public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        return rangeSum(root, 0, low, high);
    }
};