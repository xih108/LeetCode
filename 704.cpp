// 704. Binary Search
// Given a sorted (in ascending order) integer array nums of n elements and a target value, write a function to search target in nums. If target exists, then return its index, otherwise return -1.

// Binary search:  every time find the midpoint, compare and decide to go left or right.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin = 0;
        int end = size(nums)-1;
        int mid = (end-begin)/2;

        while(begin<=end){
            
            if (nums[mid] < target){
                begin = mid+1;
                mid = (end-begin)/2+begin;
                continue;
            }
            else if( nums[mid] > target)
            {
                end = mid-1;
                mid = (end-begin)/2+begin;
                continue;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};
