class Solution {
public:
    int DP_LCS(string &s1, string &s2, int m, int n, vector<vector<int>> &DP) {
        if (m == 0 || n == 0) {
            return 0;
        }
        if (DP[m][n] != -1) {
            return DP[m][n];
        }
        if (s1[m - 1] == s2[n - 1]) {  // Fix index: use m-1 and n-1
            DP[m][n] = 1 + DP_LCS(s1, s2, m - 1, n - 1, DP);
        } else {
            DP[m][n] = max(DP_LCS(s1, s2, m - 1, n, DP), DP_LCS(s1, s2, m, n - 1, DP));
        }
        return DP[m][n];
    }

    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        vector<vector<int>> DP(m + 1, vector<int>(n + 1, -1));  // Fix initialization
        return DP_LCS(text1, text2, m, n, DP);  // Fix return value
    }
};
