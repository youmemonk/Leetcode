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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *>q;
        vector<vector<int>> answer;
        if(root==NULL){return answer;}
        q.push(root);
        q.push(NULL);
        vector<int>temp;
        while(!q.empty()){
            
            TreeNode* curr=q.front();
            q.pop();
            if(curr!=NULL){
                temp.push_back(curr->val);
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
            else{
                answer.push_back(temp);
                if(q.empty()){break;}
                else{
                q.push(NULL);
                temp.clear();
                }
            }
        }
        return answer;
    }
};