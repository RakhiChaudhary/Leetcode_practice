class Solution {
public:
   /* int solve(vector<int>& nums,int ind,int prev, vector<vector<int>>&dp){
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
         

    }*/

    int lengthOfLIS(vector<int>& nums) {
        /*int n=nums.size();
         vector<vector<int>>dp(n+1,vector<int>(n+2,-1));
         int ind=0;
         int prev=-1;
         return solve(nums,0,-1,dp);*/
         int n=nums.size();
         vector<int>temp;
         temp.push_back(nums[0]);
         for(int i=1;i<n;i++){
             if(nums[i]>temp.back()){
                 temp.push_back(nums[i]);
             }
             else
             {
                 int ind = lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
                 temp[ind]=nums[i];
             }
         }
       return temp.size();
    }
};