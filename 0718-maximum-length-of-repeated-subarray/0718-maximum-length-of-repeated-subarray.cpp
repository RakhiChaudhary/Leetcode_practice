class Solution {
public:
  /*  int solve(vector<int>& nums1, vector<int>& nums2,int n,int m,int ind1,int ind2){
        if(ind1==n && ind2==m)
        return 0;

        if(nums1[ind1]==nums2[ind1]){
           return 1+solve(nums1,nums2,n,m,ind1+1,ind2+1);
        }
        
    }*/
    int findLength(vector<int>& nums1, vector<int>& nums2) {
         int n = nums1.size();
        int m = nums2.size();
        vector<int> curr(m+1,0), prev(m+1,0);
        int maxi = 0;
        for( int i=1; i<=n; ++i){
            for( int j = 1; j<=m; ++j){
                if(nums1[i-1]==nums2[j-1]){
                    curr[j] = 1+ prev[j-1];
                }
                else curr[j] =0;

                maxi = max(maxi, curr[j]);
            }
            prev = curr;
        }
        return maxi;

    }
};