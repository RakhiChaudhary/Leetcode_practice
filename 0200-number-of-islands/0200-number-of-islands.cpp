class Solution {
public:
    void dfs(int i,int j,int r,int c,vector<vector<char>>& grid){
        if(i<0 || i>=r || j<0 || j>=c || grid[i][j]!='1'){
            return;
        }
        grid[i][j]='*';
        dfs(i-1,j,r,c,grid);
        dfs(i,j-1,r,c,grid);
        dfs(i+1,j,r,c,grid);
        dfs(i,j+1,r,c,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(i,j,r,c,grid);
                }
            }
        }
        return count;
    }
};