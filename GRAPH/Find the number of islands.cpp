// gfg
void dfs(int i,int j,int n,int m,vector<vector<int>> &vis,vector<vector<char>>&grid){
        if(i <0 or j <0 or i >= n or j >= m) return ;
        if(grid[i][j] == '0') return ;
        // 8 directions
        if(!vis[i][j]){
            vis[i][j]=true;
            dfs(i-1,j,n,m,vis,grid);
            dfs(i+1,j,n,m,vis,grid);
            dfs(i-1,j+1,n,m,vis,grid);
            dfs(i-1,j-1,n,m,vis,grid);
            dfs(i+1,j-1,n,m,vis,grid);
            dfs(i+1,j+1,n,m,vis,grid);
            dfs(i,j-1,n,m,vis,grid);
            dfs(i,j+1,n,m,vis,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid)  {
        // Code here
        int  n = grid.size() , m =grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,false));
        int c = 0;
        for(int i = 0 ;i <n; i++){
            for(int j = 0; j < m ;j++){
                if(!vis[i][j] and grid[i][j] == '1'){
                    c++;
                    dfs(i,j,n,m,vis,grid);
                   
                }
            }
        }
        return c;
    }
