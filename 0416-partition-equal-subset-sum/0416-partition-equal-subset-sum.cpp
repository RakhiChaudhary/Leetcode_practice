class Solution {
public:
    bool solve(vector<int>&arr, int sum,int ind,int s,vector<vector<int>>&dp){
        if(s==sum) return true;
        if(ind==arr.size() || s>sum)
        return false;
        if(dp[ind][s]!=-1)
        return dp[ind][s];
    
        bool pick=solve(arr,sum,ind+1,s+arr[ind],dp);
        bool nopick=solve(arr,sum,ind+1,s,dp);
        
        return dp[ind][s]=pick||nopick;
    }

    bool canPartition(vector<int>& nums) {
       int sum=accumulate(nums.begin(),nums.end(),0);
       if(sum%2!=0)
       return false;
       else
       {
           vector<vector<int>>dp(nums.size()+1,vector<int>((sum/2)+1,-1));
           return solve(nums,sum/2,0,0,dp);
       }
      
    }
};