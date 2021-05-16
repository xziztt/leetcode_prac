class Solution {
public:


    int solve(int n,vector<int>&dp){
        if(n < 0){
            return 0;
        }
        if(dp[n] != 0){
            return dp[n];
        }
        else{
            dp[n] = solve(n-1,dp) + solve(n-2,dp);
            return dp[n];
        }
    }
    int climbStairs(int n) {
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        return solve(n,dp);

    }
};
