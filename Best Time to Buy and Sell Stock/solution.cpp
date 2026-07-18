class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minx = 1e9;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (prices[i] < minx) {
                minx = prices[i];
            }
            else {
                ans = max(ans, prices[i] - minx);
            }
        }
        return ans;
    }
};
