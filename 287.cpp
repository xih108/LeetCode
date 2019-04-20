// 287. Find the Duplicate Number
// Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), prove that at least one duplicate number must exist. Assume that there is only one duplicate number, find the duplicate one.

// Use a set, if the element is already in the set, then return that number.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        std::set<int> set1;
        for (int i : nums){
            if (set1.find(i) != set1.end()){
                return i;
            }
            else{
                set1.insert(i);
            }
        }
    
        return 0;
    }
};
