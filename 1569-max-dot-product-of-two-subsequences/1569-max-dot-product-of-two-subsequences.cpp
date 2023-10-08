class Solution {
public:
    int solve(vector<int>& nums1, vector<int>& nums2,int ind1,int ind2,vector<vector<int>>&dp){
        int n=nums1.size();
        int m=nums2.size();
         if(ind1==n||ind2==m)
         return -100000;
         
         if(dp[ind1][ind2]!=-1)
         return dp[ind1][ind2];

         int pick1=nums1[ind1]*nums2[ind2]+solve(nums1,nums2,ind1+1,ind2+1,dp);
         int pick2=solve(nums1,nums2,ind1+1,ind2,dp);
         int pick3=solve(nums1,nums2,ind1,ind2+1,dp);
         int onlythis=nums1[ind1]*nums2[ind2];

         return dp[ind1][ind2]=max({pick1,pick2,pick3,onlythis});
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int ind1,ind2;
        int n=nums1.size();
        int m=nums2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(nums1,nums2,0,0,dp);
    }
};