// 257. Binary Tree Paths
// Given a binary tree, return all root-to-leaf paths.

// Note: A leaf is a node with no children.

// Example:

// Input:

//    1
//  /   \
// 2     3
//  \
//   5

// Output: ["1->2->5", "1->3"]

// Explanation: All root-to-leaf paths are: 1->2->5, 1->3

// Using BFS implemented by queue, each element is a pair of the TreeNode and the string, everytime pop one and push its left and right 
// node if there exists and update the string at the same time.
// If it is a leaf node, then push the whole string to the vector.





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
    vector<string> binaryTreePaths(TreeNode* root) {
        queue<pair<TreeNode*,string>> que;
        vector<string> ans;
        if (root){
            que.push(pair<TreeNode*,string>(root,to_string(root->val)));
        }
        
        while(!que.empty()){
            TreeNode* curr = que.front().first;
            string s = que.front().second;
            que.pop();
            if (curr->left){
                que.push(pair<TreeNode*,string>(curr->left, s+"->"+to_string(curr->left->val)));
            }
            
            if (curr->right){
                que.push(pair<TreeNode*,string>(curr->right, s+"->"+to_string(curr->right->val)));
            }
            
            if (!curr->left && ! curr->right){
                ans.push_back(s);
            }
            
        }
        return ans;
    
   
    }
};
