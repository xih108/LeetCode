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
