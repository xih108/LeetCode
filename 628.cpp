class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int len = size(nums);
        return max(nums[len-1]*nums[len-2]*nums[len-3],nums[len-1]*nums[0]*nums[1]);
    }
};
