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
    bool helper(TreeNode* a, TreeNode* b){
        if(a == NULL && b == NULL) return true;
        if(a == NULL || b == NULL) return false;
        
        bool isChild = (a->val == b->val);
        bool isLeft = helper(a->left, b->right);
        bool isRight = helper(a->right, b->left);
        
        return (isChild && isLeft && isRight);
    }
    
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return helper(root->left, root->right);
    }
};