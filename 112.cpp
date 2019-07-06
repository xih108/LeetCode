// 112. Path Sum
// Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

// Note: A leaf is a node with no children.

// Use a queue, each element is a pair of TreeNode and the updated sum. 
// Everytime get the front of the queue, and push its left, right node if there exists, and the int part is sum - the curr val.
// If there exists a leaf node has its val == the sum, then return true, else return false.

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
