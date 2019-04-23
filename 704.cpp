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
