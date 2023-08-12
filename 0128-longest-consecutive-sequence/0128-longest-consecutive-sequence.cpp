class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
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
        return maxi+1;
    }
};


//0,0,1,1,1,1,2,2
//0,1,2,
