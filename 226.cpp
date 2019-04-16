#260. Single Number III
#Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

#Every time put a number into the set if its first appearence, otherwise remove it from the set. At last, return the list.

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
