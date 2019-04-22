// 905. Sort Array By Parity
// Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.

// Make even insert at front, odd push back 


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
