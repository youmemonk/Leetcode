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
    vector<string> tracePaths(vector<string>& res, TreeNode* root, string s){
        if(!root->left && !root->right){
            res.push_back(s);
            return res;
        }
        
        if(root->left) tracePaths(res, root->left, s + "->" + to_string(root->left->val));
        if(root->right) tracePaths(res, root->right, s + "->" + to_string(root->right->val));
        
        return res;
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root) return res;
        
        return tracePaths(res, root, to_string(root->val));
    }
};