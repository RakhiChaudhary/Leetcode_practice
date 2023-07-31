class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Approach 3 -Dutch flag National algorithm
        int l=0;
        int m=0;
        int r=nums.size()-1;

        while(m<=r){
            if(nums[m]==2){
                swap(nums[m],nums[r]);
                r--;

            }

            else if(nums[m]==0)
            {
                swap(nums[m],nums[l]);
                l++;
                m++;
            }

            else
               m++;
        }
        
    }
};