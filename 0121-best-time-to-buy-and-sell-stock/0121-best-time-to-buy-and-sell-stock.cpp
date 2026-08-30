class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minPrice=INT_MAX;
        for(int i:prices){
            int profit = i - minPrice;
            maxProfit = max(maxProfit, profit);

            minPrice = min(minPrice, i);
        }
        return maxProfit;
    }
};