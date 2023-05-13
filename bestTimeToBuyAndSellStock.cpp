class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        if (prices.size() == 1)
            return ans;
        else {
            int start = 0;
            for(int i = 1; i < prices.size(); i++) {
                if (prices[i] < prices[start]) {
                    start = i;
                }
                ans = max(ans, prices[i] - prices[start]);
            }
        }
        return max(ans, 0);
    }
};
