class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<bool>row(n,false);
        vector<bool>col(m,false);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0)
                {
                row[i]=true;
                col[j]=true;
                }
            }
        }

       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(row[i]==true||col[j]==true){
                   matrix[i][j]=0;
               }
           }
       }
    }
};
/*
        vector<int> row(matrix.size(), 0), col(matrix[0].size(), 0);
        for(int i=0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for(int i=0; i<row.size(); i++){
            for(int j=0; j<col.size(); j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j] =0;
                }
            }
        }
*/