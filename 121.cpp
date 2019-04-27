// 121. Best Time to Buy and Sell Stock
// Say you have an array for which the ith element is the price of a given stock on day i.
// If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

// everytime update the min stock price and the maxprofit currently.
    
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
