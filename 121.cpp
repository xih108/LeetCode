class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int maxprofit = 0;
        for (int i: prices){
            if (i < min){
                min = i;
            }
            if (i-min > maxprofit){
                maxprofit = i-min;
            }
        }
        return maxprofit;
    }
};
