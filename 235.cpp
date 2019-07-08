// 235. Lowest Common Ancestor of a Binary Search Tree
// Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

// According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

// Given binary search tree:  root = [6,2,8,0,4,7,9,null,null,3,5]

// This problem can be converted to find a node whose val is between the val of p and q. 
// When searching, if curr val < min of p,q, the go right; if curr val > max of p,q, the go left
// If it is in between, return the node.


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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* curr = root;
        int m1 = min(p->val,q->val);
        int m2 = max(p->val,q->val);
        
        while(true){
            if (curr->val >= m1 && curr ->val <= m2){
                return curr;
            }
            
            if (curr->val < m1){
                curr = curr->right;
            }
            
            if (curr->val > m2){
                curr = curr->left;
            }
        }
    }
};

