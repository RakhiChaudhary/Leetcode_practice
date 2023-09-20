class Solution {
public:
    long long solve(vector<int>& coins,int amount,int ind,long long s,vector<vector<int>>&dp){
          if(s==amount)
          return 0;
          if(s>amount || ind==coins.size())
          return 10000000;
          
          if(dp[ind][s]!=-1)
          return dp[ind][s]; 
          long long pick=1+solve(coins,amount,ind,s+coins[ind],dp);
          long long nopick=solve(coins,amount,ind+1,s,dp);

          return dp[ind][s]=min(pick,nopick);

    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        long long ans=solve(coins,amount,0,0,dp);
        if(ans>=10000000)
        return -1;
        return ans;

    }
};