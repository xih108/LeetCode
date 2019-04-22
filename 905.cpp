class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> B;
        for (int i:A){
            if (i %2 == 0 ){
                B.insert(B.begin(),i);
                
            }
            else{
                B.push_back(i);
            }
        }
        return B;
    }
};
