// 199. Binary Tree Right Side View
// Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.


// Since BFS, so use a queue, everytime pop the first one, save its value into a vector, and push its right then left
// node until pop out the whole level.






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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> tree;
        if (root){
            tree.push(root);
        }
        while(!tree.empty()){
            int len = tree.size();
            for (int i = 0; i < len; i++){
                TreeNode* curr = tree.front();
                if (!i){
                    ans.push_back(curr->val);  
                }
                tree.pop();
                if(curr->right){
                    tree.push(curr->right);
                }
                if(curr->left){
                    tree.push(curr->left);
                }
            }
        }
        return ans;
    }
};
