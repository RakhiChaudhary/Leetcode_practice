class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        unordered_map<int,int>mp;
        for(auto i:nums) mp[i]++;
        for(auto i:nums){
            int count=1;
            int ele=i;
            if(mp.find(ele-1)!=mp.end())
            continue;
            while(mp.find(ele+1)!=mp.end()){
                ele=ele+1;
                count++;
            }
            maxi=max(count,maxi);
        }
        return maxi;
       /* int n=nums.size();
        if(n<=1)
        return n;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        n=i+1;
        int maxi=0;
        int count=0;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]==1){
                count++;
                maxi=max(count,maxi);
            }
            else{
                count=0;
            }
        }
        return maxi+1;*/
    }
};


//0,0,1,1,1,1,2,2
//0,1,2,

/*100,1
4,1
200,1
1,1
3,1
2,1

100 4 200 1 3 2

if(mp.find(ele+1)!=mp.end())
count++;
100 101 1 2 3 102 103 4
ele=103
count = 4
*/