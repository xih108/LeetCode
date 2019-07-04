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

