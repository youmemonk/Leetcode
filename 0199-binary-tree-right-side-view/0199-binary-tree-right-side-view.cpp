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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> answer;
        if(!root) return answer;
        queue<TreeNode*> bfs;
        bfs.push(root);
        while(!bfs.empty()) {
            answer.push_back(bfs.front()->val);
            int size = bfs.size();
            while(size--) {
                TreeNode *front = bfs.front();
                bfs.pop();
                if(front->right) bfs.push(front->right);
                if(front->left) bfs.push(front->left);
            }
        }
        return answer;
    }
};