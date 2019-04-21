// 102. Binary Tree Level Order Traversal
// Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
// For example:
// Given binary tree [3,9,20,null,null,15,7],

// Use a queue for BST, level by level,every time pop the curr,push to a vector, add its left and right,  ... the push this vector to a total vector.




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <queue>
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> nums;
        queue<TreeNode*> que;
        
        if(root){
             que.push(root);
        }
       
        while(!que.empty()){
            int n = que.size();
            vector<int> vec1;
            for (int i = 1;i<= n; i++){
                TreeNode* curr = que.front();
                que.pop();
                vec1.push_back(curr->val);
                
                if(curr->left){
                    que.push(curr->left);
                }
                
                if(curr->right){
                    que.push(curr->right);
                }
            }
            nums.push_back(vec1);
        }
        return nums;
    }
   
};
