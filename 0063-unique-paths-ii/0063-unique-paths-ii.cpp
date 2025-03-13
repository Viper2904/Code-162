class Solution {
public:
    int dp[1000][1000];

    int solve(vector<vector<int>>& obstacleGrid, int m, int n) {
        if (m < 0 || n < 0 || obstacleGrid[m][n] == 1) {
            return 0;
        }
        if (m == 0 && n == 0) {
            return 1;
        }
        if (dp[m][n] != -1) {
            return dp[m][n];
        }
        int up = solve(obstacleGrid, m - 1, n);
        int left = solve(obstacleGrid, m, n - 1);
        return dp[m][n] = up + left;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if (obstacleGrid[0][0] == 1 || obstacleGrid[m - 1][n - 1] == 1) {
            return 0;
        }
        memset(dp, -1, sizeof(dp));
        return solve(obstacleGrid, m - 1, n - 1);
    }
};
