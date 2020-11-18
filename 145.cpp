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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        stack<TreeNode *>s;
        TreeNode *last =NULL;
        if(root == NULL){return res;}
        while(root||!s.empty()){
            while(root){
                s.push(root);
                root = root->left;
            }
            root = s.top();
            if(root->right&&root->right!=last){
                root= root->right;
            }
            else{
                res.push_back(root->val);
                last = root;
                root = NULL;
                s.pop();
            }
        }
        return res;
    }
};
