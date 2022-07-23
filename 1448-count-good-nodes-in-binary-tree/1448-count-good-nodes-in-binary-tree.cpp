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
    int countGoodNodes(TreeNode* root, int cmp){
        if(!root) return 0;
        int ans = 0;
        
        if(root->val >= cmp) ans++;
        cmp = max(root->val, cmp);
        int leftCount = countGoodNodes(root->left, cmp);
        int rightCount = countGoodNodes(root->right, cmp);
        
        return (ans + leftCount + rightCount);
    }
public:
    int goodNodes(TreeNode* root) {
        return countGoodNodes(root, root->val);
    }
};