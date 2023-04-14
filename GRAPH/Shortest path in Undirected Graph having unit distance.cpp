vector<int> shortestPath(vector<vector<int>>& edges, int n,int m, int src){
        // code here
       vector<int>adj[n];
       for(auto i : edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
       }
       vector<int>dist(n , -1);
       vector<bool> vis(n , false);
       queue<int>q;
       q.push(src);
       vis[src] = true;
       dist[src] = 0;
       
       while(!q.empty()){
            int u = q.front();
            q.pop();
           
            for(auto &v : adj[u]){
                if(vis[v] == false){
                   dist[v] = dist[u]+1;
                   vis[v] = true;  
                   q.push(v);
               }
               
           }
       }
       
      return dist; 
        
    }
