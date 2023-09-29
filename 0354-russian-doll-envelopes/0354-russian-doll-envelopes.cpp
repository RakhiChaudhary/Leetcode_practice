bool comparator(vector<int>&a,vector<int>&b){
    if(a[0]==b[0])
    return a[1]>b[1];
    return a[0]<b[0];
}
class Solution {
public:
    
    int maxEnvelopes(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end(),comparator);
        vector<int>temp;
        temp.push_back(nums[0][1]);
        for(int i=0;i<nums.size();i++){
           if(temp.back()<nums[i][1])
           temp.push_back(nums[i][1]);
           else{
           int ind=lower_bound(temp.begin(),temp.end(),nums[i][1])-temp.begin();
           temp[ind]=nums[i][1];
           }
        }
        return temp.size();
    }
};