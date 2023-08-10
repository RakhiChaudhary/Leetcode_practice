class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int count=0;
      int maxi=INT_MIN;
      int n=nums.size();
      for(int i=0;i<n;i++)  {
          if(nums[i]==1)
          {
              count+=1;
              maxi=max(count,maxi);
          }
          else
          {
              count=0;
              maxi=max(count,maxi);
          }
      }
      return maxi;
    }
};