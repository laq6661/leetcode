/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL){return res;}
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            int lvsize = q.size();
            res.push_back(vector<int>());
            while(lvsize--){
                root = q.front();
                q.pop();
                res.back().push_back(root->val);
                if(root->left){q.push(root->left);}
                if(root->right){q.push(root->right);}
            }
           
        }
        return res;
    }
};
