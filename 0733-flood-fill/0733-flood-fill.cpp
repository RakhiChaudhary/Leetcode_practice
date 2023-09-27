class Solution {
public:
  /*  int dirx[4]={1,-1,0,0};
    int diry[4]={0,0,1,-1};*/
    void dfs(vector<vector<int>>& image, int sr, int sc, int newcolor,int prevcolor){
           if(sr<0||sr>=image.size()||sc<0||sc>=image[0].size()){
                    return;
            }
            if(image[sr][sc]==newcolor || image[sr][sc]!=prevcolor)
            return;
            image[sr][sc]=newcolor;
            dfs(image,sr+1,sc,newcolor,prevcolor);
            dfs(image,sr-1,sc,newcolor,prevcolor);
            dfs(image,sr,sc+1,newcolor,prevcolor);
            dfs(image,sr,sc-1,newcolor,prevcolor);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int prevcolor=image[sr][sc];
        if(prevcolor==newcolor)
        return image;
        
        dfs(image,sr,sc,newcolor,prevcolor);
        return image;
       /* int prevcolor=image[sr][sc];
        if(prevcolor==newcolor)
        return image;
        
        queue<pair<int,int>>q;
        q.push({sr,sc});
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                image[x][y]=newcolor;
                for(int i=0;i<4;i++){
                    int newx=x+dirx[i];
                    int newy=y+diry[i];
                    if(newx<0||newx>=image.size()||newy<0||newy>=image[0].size()){
                        continue;
                    }
                    if(image[newx][newy]==prevcolor)
                    {
                        q.push({newx,newy});
                    }
                }
            }
        }
      return image;
*/
    }
};