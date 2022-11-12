class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maximum = 0;
        int profit = 0;
        int buy = INT_MAX;
        
        for(int i = 0; i<prices.size(); i++){
            
            if(prices[i]<buy)
                buy = prices[i];
            profit = prices[i] - buy;
            maximum = max(maximum,profit);
        }
        return maximum;
    }
};