class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
    
     int n=nums.size();
     //Approach 1 -Brute force
     
       /* for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                return {i,j};
            }
        }
        return {-1,-1};*/
        unordered_map<int,int>mp;
        vector<int>ans;
        int x ;
        for(int i=0;i<n;i++){
           x = target - nums[i];
           if(mp.find(x)!=mp.end())
            {
               return {i,mp[x]};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};

//2 7 11 15 