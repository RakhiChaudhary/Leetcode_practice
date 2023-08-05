class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=1;
        int i=0;
        int n=nums.size();
        while(j<n)
        {
          if(nums[i]==0){
              if(nums[j]!=0)
              {
                  swap(nums[i],nums[j]);
                  i++;
                  j++;
              }
              else{
                  j++;
              }
          }
          else
          {
              i++;
              j++;
          }
        }
    }
};