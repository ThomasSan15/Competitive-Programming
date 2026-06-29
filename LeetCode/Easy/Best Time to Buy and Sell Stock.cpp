//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        vector<int> answ(prices.size());
        int minimun = 1e8;
        for(int i = 0; i < prices.size(); i++){
            if(minimun > prices[i]){
                minimun = prices[i];
            }
            else{
                ans = max(ans, prices[i] - minimun);
            }
        }
        return ans;
    }
};