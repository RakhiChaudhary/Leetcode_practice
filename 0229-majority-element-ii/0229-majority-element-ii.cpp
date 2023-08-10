class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele1;
        int ele2;
        int cnt1=0;
        int cnt2=0;
        for(auto i:nums){
            if(cnt1 == 0 && ele2 != i){
                ele1 = i;
                cnt1++;
            }

            else if(cnt2 == 0 && ele1 != i){
                ele2 = i;
                cnt2++;
            }
            else if(ele1 == i) cnt1++;

            else if(ele2 == i) cnt2++;

            else{
                cnt1--;
                cnt2--;
            }
        }

        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1)
              count1++;
            else if(nums[i]==ele2)
              count2++;
        }
        vector<int>ans;
        if(count1>n/3)
        ans.push_back(ele1);
        if(count2>n/3)
        ans.push_back(ele2);
        return ans;
    }
};