class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Approach 1 - By sorting the array
        int n=nums.size();
       // sort(nums.begin(),nums.end());
        //return nums[n/2];

        //Approach 2 - by using map
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>n/2)
            return it.first;
        }
        return -1;
    }
};