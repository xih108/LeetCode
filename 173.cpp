// 173. Binary Search Tree Iterator
// Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST.

// Using stack to implement iterator. First go to the leftmost node, then everytime pop a node, if that node has a right node, 
// then push until the leftmost one. Otherwise, do nothing.



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode*> stack1;

    BSTIterator(TreeNode* root) {
        TreeNode* curr = root;
        while(curr){
            stack1.push(curr);
            curr = curr->left;
        }
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode* curr = stack1.top();
        stack1.pop();
        int ans = curr->val;
        if (curr->right){
            curr = curr->right;
            while(curr){
                stack1.push(curr);
                curr=curr->left;
            }
        }
        return ans;
        
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !stack1.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

