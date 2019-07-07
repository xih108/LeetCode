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
    vector<string> binaryTreePaths(TreeNode* root) {
        queue<pair<TreeNode*,string>> que;
        vector<string> ans;
        if (root){
            que.push(pair<TreeNode*,string>(root,to_string(root->val)));
        }
        
        while(!que.empty()){
            TreeNode* curr = que.front().first;
            string s = que.front().second;
            que.pop();
            if (curr->left){
                que.push(pair<TreeNode*,string>(curr->left, s+"->"+to_string(curr->left->val)));
            }
            
            if (curr->right){
                que.push(pair<TreeNode*,string>(curr->right, s+"->"+to_string(curr->right->val)));
            }
            
            if (!curr->left && ! curr->right){
                ans.push_back(s);
            }
            
        }
        return ans;
    
   
    }
};
