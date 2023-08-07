class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Approach 1 - using 1D array 
       /* vector<int>d;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                d.push_back(matrix[i][j]);
            }
        }
        */
 
        //Approach 2 -mapping the indices of 2D array into an imaginary 1 D vector
        int n=matrix.size();
        int m=matrix[0].size();
        int s=0;
        int e=n*m-1;

        while(s<=e){
            int mid=s+(e-s)/2;
            if(matrix[mid/m][mid%m]==target)
            return true;
            else if(matrix[mid/m][mid%m]<target){
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