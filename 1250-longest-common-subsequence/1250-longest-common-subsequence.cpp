class Solution {
public:
    int solve(string &text1, string &text2,int ind1,int ind2,vector<vector<int>>&dp){
        if(ind1==text1.size()||ind2==text2.size()){
            return 0;
        }
        
        if(dp[ind1][ind2]!=-1){
            return dp[ind1][ind2];
        }
        if(text1[ind1]==text2[ind2]){
            return dp[ind1][ind2]=1+solve(text1,text2,ind1+1,ind2+1,dp);
        }
        else{
            int choice1=solve(text1,text2,ind1+1,ind2,dp);
            int choice2=solve(text1,text2,ind1,ind2+1,dp);
            return dp[ind1][ind2]=max(choice1,choice2);
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size(),vector<int>(text2.size(),-1));
        return solve(text1,text2,0,0,dp);
    }
};