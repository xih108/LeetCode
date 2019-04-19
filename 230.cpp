// 230.Given a binary search tree, write a function kthSmallest to find the kth smallest element in it.
// Note: 
// You may assume k is always valid, 1 ≤ k ≤ BST's total elements.

// Traverse in inorder until the vector has size k ,then return the element at index k-1.


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
