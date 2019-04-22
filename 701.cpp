// 701. Insert into a Binary Search Tree
// Given the root node of a binary search tree (BST) and a value to be inserted into the tree, insert the value into the BST. 
// Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.
    
//Compare the insert value with the current value, if larger, go to right branch,(if no right node, add it) 
// if smaller, got to left branch(if no left node,add it). 


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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode * curr = root;
        
        while(true){
            cout<<curr->val<<endl;
            if (val > curr->val){
                if(!curr->right){
                    curr->right = new TreeNode(val);
                    break;
                }
                else{
                    curr = curr->right;
                }
            }
            
            if (val < curr->val){
                if(!curr->left){
                    curr->left = new TreeNode(val);
                    break;
                }
                else{
                    curr = curr->left;
                }
            }
        }
        
        return root;
    }
        
};
