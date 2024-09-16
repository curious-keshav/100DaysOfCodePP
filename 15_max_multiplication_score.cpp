class Solution {
public:
    long long maxScore(vector<int>& a, vector<int>& b) {
        int a_s = a.size();
        int b_s = b.size();
        vector<vector<signed long long>> dp(a_s + 1, vector<long long>(b_s + 1, 0));

        for (int i = 1; i <= a_s; i++) {
            signed long long prevMaxi = LLONG_MIN;  
            for (int j = i; j <= b_s; j++) { 
                prevMaxi = max(prevMaxi, dp[i-1][j-1]);
                dp[i][j] = prevMaxi + (long long)a[i-1] * b[j-1];
            }
        }

        long long result = INT_MIN;
        for (int j = a_s; j <= b_s; j++) {
            result = max(result, dp[a_s][j]);  
        }

        return result; 
    }
};
