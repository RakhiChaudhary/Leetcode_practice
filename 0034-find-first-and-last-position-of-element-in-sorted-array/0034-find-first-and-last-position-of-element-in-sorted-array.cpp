class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
      //  vector<int>v={-1,-1};
      int first=-1;
      int last=-1;
        for(int i=0;i<nums.size();i++){
                if(nums[i]==target) {
                 /*   if(nums[i]!=nums[i-1] || nums[i]!=nums[i+1])
                    {
                        v.push_back(i);
                    }*/

                    if(first==-1)
                    first=i;
                    last=i;
                }   
            }
         return {first,last};
    }
};