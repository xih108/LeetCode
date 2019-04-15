/**
 * Definition for a binary tree node.
#938. Range Sum of BST
#Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).
#The binary search tree is guaranteed to have unique values.

#Use recursion to visit all the nodes and add it if it satisfies the condition.
 

 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        return recursive(root, L,R);
    }
            
    int recursive(TreeNode* root, int L, int R){
        if (!root) 
        {
            return 0;
        }
        
        int a = 0;
        if (root->val>= L && root->val<= R){
            a = root->val;
        }
 
        return a+recursive(root->left,L,R)+recursive(root->right,L,R);
    } 
    
};
