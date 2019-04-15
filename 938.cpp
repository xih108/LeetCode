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
        
        
        return a+recursive(root->left,L,R)+
        recursive(root->right,L,R);

        // else if (root ->val < L){
        //     return recursive(root->right, L, R);
        // }
        // else if(root -> val > R) {
        //     return recursive(root->left, L, R);
        // }
    } 
    
};
