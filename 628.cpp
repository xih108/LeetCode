// 628. Maximum Product of Three Numbers
// Given an integer array, find three numbers whose product is maximum and output the maximum product.

// Sort the numbers, the maximum would be max1*max2*max3 or min1*min2*max1    
    
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int len = size(nums);
        return max(nums[len-1]*nums[len-2]*nums[len-3],nums[len-1]*nums[0]*nums[1]);
    }
};
