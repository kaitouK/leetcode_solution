class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        if (n == 0)
            return 0;
        vector<int> dp(n + 1, -1);
        dp[0] = 0;
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j < coins.size(); ++j) {
                if (i - coins[j] < 0 || dp[i - coins[j]] == -1)
                    continue;
                dp[i] = dp[i] == -1 ? dp[i - coins[j]] + 1 : min(dp[i - coins[j]] + 1, dp[i]);
            }
        }
        return dp[n];
    }
};