class Solution {
public:
    int fun(int i, int j, vector<int>& cuts, vector<vector<int>>& dp) {
        if (i > j) return 0;
        if (dp[i][j] != -1) return dp[i][j];

        int minCost = INT_MAX;
        for (int k = i; k <= j; k++) {
            int cost = (cuts[j + 1] - cuts[i - 1]) + fun(i, k - 1, cuts, dp) + fun(k + 1, j, cuts, dp);
            minCost = min(minCost, cost);
        }
        return dp[i][j] = minCost;
    }

    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());

        int m = cuts.size();
        vector<vector<int>> dp(m, vector<int>(m, -1));
        return fun(1, m - 2, cuts, dp);
    }
};
