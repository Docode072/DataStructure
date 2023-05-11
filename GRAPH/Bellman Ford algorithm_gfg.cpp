vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int>dist(V, 1e8);
        dist[S] = 0;
        // time complexity -> o(n2);
        for(int i = 0; i< V; i++){
            for(auto edge : edges){
                int u = edge[0];
                int v = edge[1];
                int wt = edge[2];
                
                // check for relaxation if it current node is reachable
                if(dist[u] != 1e9 && dist[u] + wt < dist[v]){
                    dist[v] = dist[u]+wt;
                }
            }
        }
        // to detect negative cycle
        for(auto edge : edges){
                int u = edge[0];
                int v = edge[1];
                int wt = edge[2];
                
                // check for relaxation if it current node is reachable
                if(dist[u] != 1e8 && dist[u] + wt < dist[v]){
                    return {-1};
                }
        }
        
        return dist;
        
    }
