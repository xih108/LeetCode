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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return recursion(p,q);
    }
    
    bool recursion(TreeNode* root1,TreeNode* root2){
        if (root1 && root2){
            return (root1->val == root2->val) && 
                recursion(root1->left,root2->left)
                && recursion(root1->right,root2->right);
        }
        
        if(!root1 && !root2){
            return true;
        }
        
        return false;
    }
};
