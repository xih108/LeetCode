#226. Invert Binary Tree
#Invert a binary tree.

#Use recursion to reverse the binary tree by assign its left to right, right to left for each tree node.

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
    TreeNode* invertTree(TreeNode* root) {   
        recursion(root);
        return root;
    }
    
    void recursion(TreeNode* root){
        if (!root){
            return;
        }
        TreeNode* new_left = root->right;
        root->right = root->left;
        root->left = new_left;
        recursion(root->left);
        recursion(root->right);
    }
};
