class Solution {
public: 
    int solve(vector<vector<int>>& cuboids,int ind,int prev,vector<vector<int>>&dp){
        if(ind==cuboids.size())
        return 0;
        
        if(dp[ind][prev+1]!=-1)
        return dp[ind][prev+1];
        if(prev==-1 || cuboids[ind][1]>=cuboids[prev][1] && cuboids[ind][2]>=cuboids[prev][2])
        {
            int pick=cuboids[ind][2]+solve(cuboids,ind+1,ind,dp);
            int nopick=solve(cuboids,ind+1,prev,dp); 
            return dp[ind][prev+1]=max(pick,nopick);
        }
        else{
             int nopick=solve(cuboids,ind+1,prev,dp); 
             return dp[ind][prev+1]=nopick;
        }
           
    }
    int maxHeight(vector<vector<int>>& cuboids) {
        int n=cuboids.size();
        vector<vector<int>>dp(n+1,vector<int>(n+2,-1));
        for(auto &it:cuboids)
        {
            sort(it.begin(),it.end());
        }
        sort(cuboids.begin(),cuboids.end());
        return solve(cuboids,0,-1,dp);
    }
};