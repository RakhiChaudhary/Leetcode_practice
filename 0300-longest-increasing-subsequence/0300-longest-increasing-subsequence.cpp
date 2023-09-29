class Solution {
public:
    int solve(vector<int>& nums,int ind,int prev, vector<vector<int>>&dp){
          if(ind==nums.size())
          return 0;
          
          if(dp[ind][prev+1]!=-1)
          return dp[ind][prev+1];

          if(prev==-1 || nums[ind]>nums[prev]){
              int pick=1+solve(nums,ind+1,ind,dp);
              int nopick=solve(nums,ind+1,prev,dp);
              return dp[ind][prev+1]=max(pick,nopick);
          }
          else
          {
               int nopick=solve(nums,ind+1,prev,dp);
               return dp[ind][prev+1]=nopick;
          }
         

    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
         vector<vector<int>>dp(n+1,vector<int>(n+2,-1));
         int ind=0;
         int prev=-1;
         return solve(nums,0,-1,dp);
    }
};