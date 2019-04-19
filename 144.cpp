// 144. Binary Tree Preorder Traversal
// Given a binary tree, return the preorder traversal of its nodes' values.

// Use recursion, travel middle, left, right.
    
    
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        recursion(root,ans);
        return ans;
    }
    
    void recursion(TreeNode * root, vector<int> &ans){
        if (!root){
            return;
        }
        ans.push_back(root->val);
        recursion(root->left,ans);
        recursion(root->right,ans);
        
    }
};
