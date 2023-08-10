class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n=nums.size();
       int target =0;
       sort(nums.begin(),nums.end());
       vector<vector<int>>ans;
       for(int i=0;i<n;i++){
           int newTarget = target - nums[i];
           //two sum code 
           int s=i+1;
           int e=n-1;
           while(s<e){
               if(nums[s]+nums[e]==newTarget)
               {
                   ans.push_back({nums[i],nums[s],nums[e]});
                   //avoiding duplictes for index s
                   while(s<e && nums[s]==nums[s+1]){
                      s++;
                   }    
                    //avoiding duplictes for index e
                   while(s<e && nums[e]==nums[e-1]){
                      e--;
                   }  

                   s++;
                   e--;
               }

               else if(nums[s]+nums[e]<newTarget)
               {
                   s++;
               }

               else
                 e--;
           }
           while(i<n-1 && nums[i]==nums[i+1])
           i++;
        
       }
          return ans; 
    }
};

//-4 -1 -1 0 1 2