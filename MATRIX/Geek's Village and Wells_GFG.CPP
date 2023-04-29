// Bfs approach
class Solution{
public:
    vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        // Code here
        int dx[4] = {-1,1,0,0};
        int dy[4] = {0,0,-1,1};
        
        // bfs base algo
        vector<vector<int>>dist(n , vector<int>(m , -1));
        vector<vector<int>>vis(n , vector<int>(m , false));
        queue<pair<int,int>>q;
        for(int i = 0 ; i< n; i++){
            for(int j = 0 ; j< m; j++){
                if(c[i][j] == 'N' || c[i][j] == 'W' || c[i][j] == '.'){
                    dist[i][j] = 0;
                }
                if(c[i][j] == 'W'){
                    q.push({i , j});
                    vis[i][j] = true;
                }
             }
        }
        int distc = 2;
        while(!q.empty())
        {
            int qsize = q.size();
            while(qsize--){
                auto it = q.front();
                q.pop();
                int i = it.first; int j = it.second;
                for(int k = 0; k<4; k++){
                    int curri = i+dx[k]; int currj = j+dy[k];
                    if(curri >= 0 && currj >=0 && curri < n && currj < m && !vis[curri][currj] && c[curri][currj] != 'N'){
                        vis[curri][currj] =true;
                        q.push({curri , currj});
                        if(c[curri][currj] == 'H')
                        {
                            dist[curri][currj] = distc;
                        }
                    }
                }
            }
            distc += 2;
        }
        
       return dist; 
        
    }
};
