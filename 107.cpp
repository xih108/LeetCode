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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> nums;
        queue<TreeNode*> que;
        
        if (root){
            que.push(root);
        }
        
        while(!que.empty()){
            int n = que.size();
            vector<int> curr;
            for (int i=0;i<n ;i++){
                TreeNode * node = que.front();
                que.pop();
                curr.push_back(node->val);
                if (node->left){
                    que.push(node->left);
                }
                if (node ->right){
                    que.push(node->right);
                }
            }
            nums.insert(nums.begin(),curr);
        }
        return nums;
    }
};
