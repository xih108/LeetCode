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
