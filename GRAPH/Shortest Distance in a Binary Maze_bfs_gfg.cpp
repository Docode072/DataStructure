class Solution {
  public:
    int shortestPath(vector<vector<int>> &A, pair<int, int> src,
                     pair<int, int> dest) {
        // code here
        int dxi = dest.first  ,dyj = dest.second;
        int n = A.size() , m = A[0].size();
        
        if(m == 0 || n == 0 || A[src.first][src.second] != 1)
          return -1;
        
        int dist = 0;
        int dx[4] = {0 , 0, 1 , -1};
        int dy[4] = {1 ,-1, 0 , 0};
        vector<vector<int>>vis(n , vector<int>(m, -1));
        queue<pair<int, int>>q;
        if(A[dxi][dyj] == 0) return -1;
        q.push(src);
        vis[src.first][src.second] = 1;
        while(!q.empty()){
            dist++;
            int sz = q.size();
            while(sz--){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();

                if(A[row][col] == 0) return -1;

                if(row == dxi and col == dyj) return --dist;
                for(int i = 0; i< 4; i++){
                    int nrow = dx[i]+row;
                    int ncol = dy[i]+col;

                    if( nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and vis[nrow][ncol] == -1 and A[nrow][ncol] == 1){
                        q.push({nrow , ncol});
                        vis[nrow][ncol] = 1;
                    }
                }
            }
        }
        return -1;
    }
};
