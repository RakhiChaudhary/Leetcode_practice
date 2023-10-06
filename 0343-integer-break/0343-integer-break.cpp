class Solution {
public:
    int solve(int sum,int i,int n,vector<vector<int>>&dp){
       // int sum=0;
        if(sum==n || i==n)
        return 1;
        
        if(sum>n ||i>n)
        return -1;

        if(dp[i][sum]!=-1)
        return dp[i][sum];

        int pick=i*solve(sum+i,i,n,dp);
        int nopick=solve(sum,i+1,n,dp);

        return dp[i][sum]=max(pick,nopick);


    }
    int integerBreak(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int sum=0;
        return solve(sum,1,n,dp);
    }
};