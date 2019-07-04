// 215. Kth Largest Element in an Array
// Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.


//Use priority queue as max heap, then pop until the k the largest element.

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> que;
        for (int i= 0 ; i< nums.size(); i++){
            que.push(nums[i]);
        }
        
        int ans;
        for (int j = 0;j < k;j++){
            ans = que.top();
            que.pop();
        }
        
        return ans;
    }
};
