
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        stack<TreeNode *>s1;
        stack<TreeNode *>s2;
        if(root ==NULL){return res;}
        s1.push(root);
        while(!s1.empty() || !s2.empty()){
            if(!s1.empty()){res.push_back(vector<int>());}
            while(!s1.empty()){
                root = s1.top();
                s1.pop();
                res.back().push_back(root->val);
                if(root->left){s2.push(root->left);}
                if(root->right){s2.push(root->right);}
            }
            if(!s2.empty()){res.push_back(vector<int>());}
            while(!s2.empty()){
                root = s2.top();
                s2.pop();
                res.back().push_back(root->val);
                if(root->right){s1.push(root->right);}
                if(root->left){s1.push(root->left);}
            }
        }
        return res;
    }
};
