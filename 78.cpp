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
