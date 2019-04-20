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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int begin = 0;
        int end = size(nums)-1;
        
        return recursion(begin,end,nums);
    }
    
    TreeNode* recursion(int begin,int end,vector<int>& nums){
        // cout<<begin<<end<<endl;
        if (end < begin){
            return NULL;
        }
        int mid = begin + (end - begin) / 2; 

        TreeNode* root = new TreeNode(nums[mid]);
        
        root-> left = recursion(begin,mid-1,nums);
        root-> right = recursion(mid+1,end,nums);
        return root;
    }
};
