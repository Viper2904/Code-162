class Solution {
public:
    int DP_LCS(string &s1, string &s2, int m, int n, vector<vector<int>> &DP) {
        if (m == 0 || n == 0) {
            return 0;
        }
        if (DP[m][n] != -1) {
            return DP[m][n];
        }
        if (s1[m - 1] == s2[n - 1]) {
            DP[m][n] = 1 + DP_LCS(s1, s2, m - 1, n - 1, DP);
        } else {
            DP[m][n] = max(DP_LCS(s1, s2, m - 1, n, DP), DP_LCS(s1, s2, m, n - 1, DP));
        }
        return DP[m][n];
    }

    int longestPalindromeSubseq(string s) {
        string s2 = s;
        reverse(s2.begin(), s2.end());
        int m = s.size();
        int n = s2.size();
        vector<vector<int>> DP(m + 1, vector<int>(n + 1, -1));
        return DP_LCS(s, s2, m, n, DP);
    }
};
