// 78. Subsets
// Given a set of distinct integers, nums, return all possible subsets (the power set).

// First add [], then for each num in nums, keep the exisiting and add it to all the existing subsets.
//example: [1,2,3]
// [] 
// add 1 [],[1]
// add 2 [],[1],[2],[1,2]
// add 3 [],[1],[2],[3],[1,3],[2,3],[1,2,3]
    



class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> null;
        ans.push_back(null);
        
        for (int i = 0; i< size(nums) ;i++){
            int len = size(ans);
            for (int j = 0 ; j<len; j++){
                ans[j].push_back(nums[i]);
                ans.push_back(ans[j]);
                ans[j].pop_back();
            }
        }
   
            
        return ans;
    }
    
};
