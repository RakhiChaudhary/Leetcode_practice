class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      /*  int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
          int sum=0;
          for(int j=i;j<n;j++)
          {
             sum+=nums[j];
             maxi=max(sum,maxi);
          }
        }
        return maxi;
       */

       int n=nums.size();
       int maxsum=INT_MIN;
       int cursum=0;
       for(int i=0;i<n;i++)
       {
         cursum=cursum+nums[i];
         maxsum=max(cursum,maxsum);
         if(cursum<0)
          cursum=0;
       }
      return maxsum;
    
    }
};

//  i=>startindex of subarray
//     j=>endingindex of subarray
// [-2,1,-3,4,-1,2,1,-5,4]
// subarrays 
// [-2] => sum =-2
// [-2,1]=>sum =-1
// [-2,1,-3]=> sum = -4
// [1]
// [1,-3]
//


//Approach 2 - kadane's algo
/*sum += arr[i];

maxsum = max(maxsum, sum);

(sum<0) sum =0;


         -2   1 -3   4 -1 2 1 -5 4
sum      -2 0+1 -2 0+4  3 5 6  1 5 
maxi     -2   1  1   4  4 5 6  6 6

*/