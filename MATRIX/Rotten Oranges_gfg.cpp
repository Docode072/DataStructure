// using bfs
int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size(); int m = grid[0].size();
        // bfs base algo
        queue<pair<int,int>>q;
        for(int i = 0 ; i< n; i++){
            for(int j = 0 ; j< m; j++){
                if(grid[i][j] == 2){
                    q.push({i , j});
                }
             }
        }
        int count = 0;
        q.push({-1,-1});
        while(!q.empty())
        {
            int i = q.front().first;
            int j = q.front().second;
            if(i == -1 and j== -1 and q.size() == 1){
                q.pop();
                break;
            } 
            else if(i == -1 and j == -1 and q.size() > 1){
                count++;
                q.pop();
                q.push({-1,-1});
            }
            else{
                if((j-1) >=0 and grid[i][j-1]==1){
                    grid[i][j-1] = 2;
                    q.push({i , j-1});
                }
                if((i+1) < n and grid[i+1][j]==1){
                    grid[i+1][j] = 2;
                    q.push({i+1 , j});
                }
                if((j+1) < m and grid[i][j+1]==1){
                    grid[i][j+1] = 2;
                    q.push({i , j+1});
                }
                if((i-1) >=0 and grid[i-1][j]==1){
                    grid[i-1][j] = 2;
                    q.push({i-1 , j});
                }
                q.pop();
            }
            
        }
        for(int i = 0; i< n ; i++){
            for(int j = 0; j< m ; j++){
                if(grid[i][j] == 1) return -1;
            }
        }
        
       return count; 
    }
