class Solution {
public:
    int maxProfit(vector<int>& nums) {
       /* int maxp=INT_MIN;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            int p=0;
            for(int j=i;j<n;j++)
            {
                p=prices[j]-prices[i];
                maxp=max(p,maxp);
            }
        }
        return maxp;*/

        //Approach
       /* int n=prices.size();
        int maxp=0;
        int smallest=INT_MAX;
        for(int i=0;i<n;i++)
        {
             smallest=min(smallest,prices[i]);
             maxp=max(maxp,prices[i]-smallest);
        }

        return maxp;
        */
int n=nums.size();
int minele=INT_MAX;
int maxprice=INT_MIN;
for(int i=0;i<n;i++){
    minele=min(minele,nums[i]);
    maxprice=max(maxprice,nums[i]-minele);
}
return maxprice;
    }
};

// smallest = min(smallest, prices[])
 
//       7       1        5       3      6     4
// s     7       1        
// m     7-7     1=1
// maxprof => max of m











