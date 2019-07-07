// 27. Remove Element
// Given an array nums and a value val, remove all instances of that value in-place and return the new length.

// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

// The order of elements can be changed. It doesn't matter what you leave beyond the new length.



// Use vector iterator , if the value the iterator points to equal to the val, make the itr -1, then erase iter+1.



class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator itr;
        for (itr = nums.begin(); itr != nums.end(); itr++){
            if (*itr == val){
                itr --;
                nums.erase(itr+1);
            }
            
        }
        
        return nums.size();
    }
};
