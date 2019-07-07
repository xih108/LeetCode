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

