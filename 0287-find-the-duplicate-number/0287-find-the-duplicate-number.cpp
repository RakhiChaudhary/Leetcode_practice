class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto i:mp){
            if(i.second>=2)
            return i.first;
        }
        return -1;*/
        int slow=0;
        int fast=0;
        while(true){
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(slow==fast)
            break;
        }
        fast=0;
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};