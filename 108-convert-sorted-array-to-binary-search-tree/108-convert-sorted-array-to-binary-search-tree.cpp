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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        int middle = n / 2;
        
        if(n == 0) return NULL;
        if(n == 1) return new TreeNode(nums[0]);
        
        TreeNode* root = new TreeNode(nums[middle]);
        
        vector<int> leftSubTree(nums.begin(), nums.begin() + middle);
        vector<int> rightSubTree(nums.begin() + middle + 1, nums.end());
        
        root->left = sortedArrayToBST(leftSubTree);
        root->right = sortedArrayToBST(rightSubTree);
        
        return root;
    }
};