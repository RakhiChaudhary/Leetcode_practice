class Solution {
public:
    int rev(int num){
        int ans=0;
        while(num>0){
            int x=num%10;
            ans=ans*10+x;
            num=num/10;
            
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int m=1e9+7;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int r=nums[i]-rev(nums[i]);
            if(mp.find(r)!=mp.end()){
                   count=(count%m)+(mp[r]%m);
                  mp[r]++;
                 
            }
            else
            {
                mp[r]++;
            }
            
        }
        return count%m;
    }
};