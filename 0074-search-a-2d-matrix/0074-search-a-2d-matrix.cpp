class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Approach 1 - using 1D array 
        vector<int>d;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                d.push_back(matrix[i][j]);
            }
        }

        int s=0;
        int e=d.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(d[mid]==target)
            return true;
            else if(d[mid]<target){
                s=mid+1;
            }
            else
            {
               e=mid-1;
            }

        }
        return false;
    }
};