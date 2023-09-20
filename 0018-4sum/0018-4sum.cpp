class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       // int n=nums.size();
       /*sort(nums.begin(),nums.end());
       vector<vector<int>>ans;
       for(int i=0;i<n;i++){
           long long newTarget = target - nums[i];
           //3 sum code
           for(int j=i+1;j<n;j++){
               long long newTarget1 = newTarget - nums[j];
               int s = j+1;
               int e=n-1;
               while(s<e){
                   if((long long) nums[s]+nums[e]==newTarget1)
                   {
                       ans.push_back({nums[s],nums[e],nums[i],nums[j]});
                       while(s<e && nums[s]==nums[s+1]) s++;
                        while(s<e && nums[e]==nums[e-1]) e--;
                       s++;
                       e--;
                   }
                   else if(nums[s]+nums[e]<newTarget1)
                   {
                       s++;
                   }
                   else
                   e--;

               
               }
               while(j<n-1 && nums[j]==nums[j+1]) j++;
           }
            while(i<n-1 && nums[i]==nums[i+1]) i++;
       }
       return ans;*/
sort(nums.begin(),nums.end());
vector<vector<int>>ans;
int n=nums.size();
for(int i=0;i<n;i++){
    long long t1=target-nums[i];
    for(int j=i+1;j<n;j++){
        long long t2=t1-nums[j];
        int s=j+1;
        int e=n-1;
        while(s<e){
            if((long long)nums[s]+nums[e]==t2){
                ans.push_back({nums[i],nums[j],nums[s],nums[e]});
                  while(s<e && nums[s]==nums[s+1]){
                  s++;
                   }
                  while(s<e && nums[e]==nums[e-1]){
                        e--;
                    }
                    s++;
                    e--;
            }
            else if(nums[s]+nums[e]<t2){
                 s++;
            }
            else
            e--; 
        }
        while(j+1<n && nums[j]==nums[j+1]){
            j++;
        }
    }
     while(i+1<n && nums[i]==nums[i+1]){
            i++;
        }

}
return ans;
       
    }
};

//a+b+c+d=target
//b+c+d=target-a


