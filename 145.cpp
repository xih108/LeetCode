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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> nums;
        return recursion(root,nums);
    }
    
    vector<int> recursion(TreeNode *root, vector<int> & nums){
        if (!root){
            return nums;
        }
        else{
            nums = recursion(root->left,nums);
            nums = recursion(root->right,nums);
            nums.push_back(root->val);
            return nums;
        }
    }
};
