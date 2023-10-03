class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& nums) {
        unordered_map<double,long long>mp;
        long long count=0;
        for(int i=0;i<nums.size();i++){
            double x=(double)(nums[i][0]*1.)/(double)nums[i][1];
            if(mp.find(x)!=mp.end()){
                 mp[x]++;
                 count=count+(mp[x]-1);
            }
            else
            mp[x]++;
        }
        return count;
    }
};