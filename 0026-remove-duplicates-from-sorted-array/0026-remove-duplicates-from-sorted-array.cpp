class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;
        while(i<n && j<n){
            if(nums[i]==nums[j]){
               j++;
            }
            else {
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        return i+1;
    }
};

//[0,0,1,1,1,2,2,3,3,4]
//[0,1,2,3,4,1,1,2,3]
