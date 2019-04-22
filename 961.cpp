// 961. N-Repeated Element in Size 2N Array
// In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements is repeated N times.
// Return the element repeated N times.

//Use a map to count, if it appears more than once, then return it.

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> map1;
        for (int i:A){
            if(map1.find(i) == map1.end()){
                map1.insert(pair(i,1));
            }
            else{
                return i;
            }
        }
    
    return 0;
    }
};
