class Solution {
public:
    int dirx[4]={1,-1,0,0};
    int diry[4]={0,0,1,-1};
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 if(grid[i][j]==2)
                 q.push({i,j});
                 else if(grid[i][j]==1)
                 fresh++;
            }
        }
        int rotten=q.size();
        if(rotten==0 && fresh!=0)
        return -1;
        if(fresh==0||rotten==0)
        return 0;
        int t=-1;
        
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                grid[x][y]=0;
                for(int i=0;i<4;i++){
                    int newx=x+dirx[i];
                    int newy=y+diry[i];
                    if(newx<0||newx>=grid.size()||newy<0||newy>=grid[0].size()){
                        continue;
                    }
                    if(grid[newx][newy]==1)
                    {
                        q.push({newx,newy});
                        grid[newx][newy]=0;
                        fresh--;
                    }
                }
              
            }
              t++;
        }
        if(fresh!=0)
        return -1;
        return t;
    }
};