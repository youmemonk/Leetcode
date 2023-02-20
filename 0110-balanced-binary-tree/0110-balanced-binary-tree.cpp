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
    int Height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int Left=Height(root->left);
        int Right=Height(root->right);
        return max(Left,Right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if (root==NULL){
            return 1;
        }
        bool Left = isBalanced(root->left);
        bool Right = isBalanced(root->right);
        bool diff;
        if(Height(root->left)>Height(root->right)){
            diff=Height(root->left)-Height(root->right)<=1;
        }
        else if(Height(root->right)>Height(root->left)){
            diff = Height(root->right)-Height(root->left)<=1;
        }
        else{
            diff = 1;
        }
        if(Left && Right && diff){
            return true;
        }
        else{
            return false;
        }
    }
};