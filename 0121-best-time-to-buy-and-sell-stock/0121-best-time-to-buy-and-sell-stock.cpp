class Solution {
public:
    int maxProfit(vector<int>& prices) {
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
        int n=prices.size();
        int maxp=0;
        int smallest=INT_MAX;
        for(int i=0;i<n;i++)
        {
             smallest=min(smallest,prices[i]);
             maxp=max(maxp,prices[i]-smallest);
        }

        return maxp;
    }
};