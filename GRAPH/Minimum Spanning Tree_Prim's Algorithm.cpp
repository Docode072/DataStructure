int spanningTree(int V, vector<vector<int>> adj[])
    {
        //using priority queue(min heap);
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<int>vis(V,0);
        int sum = 0;
        pq.push({0 , 0}); // (wt, node)
        //vis[0] = 1;
        while(!pq.empty()){
            auto it = pq.top();
            int node = it.second;
            int wt = it.first;
            pq.pop();
            if(vis[node] == 1) continue;
            // inculde in mst 
            vis[node] = 1;
            sum += wt;
            for(auto it : adj[node]){ // it --> (node, wt)
                int adjnode = it[0];
                int edwt = it[1];
                if(!vis[adjnode]){
                    pq.push({edwt , adjnode});
                }
            }
        }
        
        return sum;
    }
