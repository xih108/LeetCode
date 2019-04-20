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
