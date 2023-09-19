class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      //lefft to right -> firstrow -> firstcol ->lastcol ->firstrow++;
        // up to down -> last col -> firstrow->lastrow ->lastcol--
        // right->left -> lastrow -> lastcol-> firstcol=>lastrow--;
        // down to up -> firstcol -> lastrow ->firstrow ->firstcol++; 
        int n = matrix.size();
        int m = matrix[0].size();
        int total = n*m;
        int count =0;
        int firstrow=0;
        int firstcol=0;
        int lastrow=n-1;
        int lastcol=m-1;
        vector<int>ans;
        while( count<total){
            //lefft to right -> firstrow -> firstcol ->lastcol ->firstrow++;  
            for(int i=firstcol;i<=lastcol && count<total;i++){
               ans.push_back(matrix[firstrow][i]);
               count++;
            }
            firstrow++;
           
           // up to down -> last col -> firstrow->lastrow ->lastcol--;
           for(int i=firstrow;i<=lastrow && count<total;i++){
               ans.push_back(matrix[i][lastcol]);
               count++;
            }
            lastcol--;

            // right->left -> lastrow -> lastcol-> firstcol=>lastrow--;
            for(int i=lastcol;i>=firstcol && count<total;i--)
            {
               ans.push_back(matrix[lastrow][i]);
               count++;
            }
            lastrow--;

             // down to up -> firstcol -> lastrow ->firstrow ->firstcol++; 
             for(int i=lastrow;i>=firstrow && count<total;i--){
               ans.push_back(matrix[i][firstcol]);
               count++;
            }
            firstcol++;
        }
        return ans;
    }
    
};


  /*  vector<int> ans;
        int n= matrix.size();
        int m= matrix[0].size();
        
        int count=0;
        int total = m*n;
        
        int startingCol = 0;
        int startingRow= 0;
        int endingRow = n-1;
        int endingCol = m-1;
        
        while(count<total){
            //starting row
            for(int index = startingCol; count<total&& index<=endingCol; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //end column
            for(int index= startingRow;count<total && index<=endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //ending row;
            for(int index = endingCol; count<total && index>=startingCol; index --){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //starting Column
            for(int index = endingRow; count<total && index>=startingRow; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
*/
