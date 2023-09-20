class Solution {
public:
    int solve(string &word1, string &word2,int n,int m,int ind1,int ind2,vector<vector<int>> &dp){
        if(ind1==n && ind2==m){
           return 0;
        }

        if(ind1==n )
          return m-ind2;
        
        if(ind2==m){
            return n-ind1;
        }
        
        if(dp[ind1][ind2]!=-1){
            return dp[ind1][ind2];
        }
        if(word1[ind1]==word2[ind2]){
            return dp[ind1][ind2]=solve(word1,word2,n,m,ind1+1,ind2+1,dp);
        }
        
            int insert=1+solve(word1,word2,n,m,ind1,ind2+1,dp);
            int replace=1+solve(word1,word2,n,m,ind1+1,ind2+1,dp);
            int deletee=1+solve(word1,word2,n,m,ind1+1,ind2,dp);
            return dp[ind1][ind2]=min(insert,min(replace,deletee));
        
    }

    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
         vector<vector<int>> dp(n, vector<int> (m, -1));
        return solve(word1,word2,n,m,0,0,dp);
    }
};
 /*int solve( string word1, string word2, int i, int j, vector<vector<int>> &dp){
        //base condition
        if(i==-1) return j+1;
        if( j==-1) return i+1;
        
        if( dp[i][j] !=-1) return dp[i][j];
        
        if( word1[i]== word2[j]){
            return dp[i][j]=solve(word1,word2,i-1, j-1, dp);
        }
        
        //we can perform three operations
        int insert = solve(word1, word2, i, j-1, dp);
        int remove = solve( word1, word2, i-1, j, dp);
        int replace = solve( word1, word2, i-1, j-1, dp);
        
        return dp[i][j]= 1+ min({insert, remove, replace});
    }
    int minDistance(string word1, string word2) {
        int n1= word1.size();
        int n2= word2.size();
        vector<vector<int>> dp(n1, vector<int> (n2, -1));
        return solve( word1, word2, n1-1, n2-1, dp);
    }
*/