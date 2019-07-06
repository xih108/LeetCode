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
    bool hasPathSum(TreeNode* root, int sum) {
        queue<pair<TreeNode*,int>> que;
        if (root){
            que.push(pair<TreeNode*,int>(root,sum));
        }
        
        while(!que.empty()){
            TreeNode* curr = que.front().first;
            sum = que.front().second;
            que.pop();
            if(curr->left){
                que.push(pair<TreeNode*,int>(curr->left,sum - curr->val));
            }
            if(curr->right){
                que.push(pair<TreeNode*,int>(curr->right,sum - curr->val));
            }
            // cout<<curr->val<<" "<<sum<<endl;
            
            if (!curr->left && !curr->right && sum-curr->val == 0){
                return true;
            }
        }
        return false;
    }
};
