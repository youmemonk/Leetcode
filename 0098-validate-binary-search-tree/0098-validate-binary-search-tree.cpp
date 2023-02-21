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
private: vector<int> treeArray;
public:
    bool isValidBST(TreeNode* root) {
        inorder(root);
        return isSorted(treeArray);
    }
    
    void inorder(TreeNode* root){
        if(root == NULL) return;
        
        inorder(root->left);
        treeArray.push_back(root->val);
        inorder(root->right);
    }
    
    bool isSorted(vector<int> arr){
        for(int i = 0; i < arr.size() - 1; i++){
            if(arr[i] >= arr[i+1]) return false;
        }
        
        return true;
    }
};