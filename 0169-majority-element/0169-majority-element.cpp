class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Approach 1 - By sorting the array
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];

        //
    }
};