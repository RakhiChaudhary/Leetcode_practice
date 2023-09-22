class Solution {
public:
    void dfs(int i,int j,int r,int c,int &count,vector<vector<int>>& grid){
        if(i<0 || i>=r || j<0 || j>=c || grid[i][j]!=1){
            return;
        }
        grid[i][j]=-1;
        count++;
        dfs(i-1,j,r,c,count,grid);
        dfs(i,j-1,r,c,count,grid);
        dfs(i+1,j,r,c,count,grid);
        dfs(i,j+1,r,c,count,grid);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int maxarea=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1)
                {
                  //  count++;
                     int count=0;
                    dfs(i,j,r,c,count,grid);
                    maxarea=max(count,maxarea);
                }
            }
        }
        return maxarea;
    }
};

