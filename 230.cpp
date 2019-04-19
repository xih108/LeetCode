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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        recursion(root,ans,k);
        return ans[k-1];
    }
    
    void recursion(TreeNode* root, vector<int> & ans, int k){
        if (!root){
            return;
        }
        
        if (size(ans) == k){
            return;
        }
        recursion(root->left,ans,k);
        ans.push_back(root->val);
        recursion(root->right,ans,k);
    }
};
