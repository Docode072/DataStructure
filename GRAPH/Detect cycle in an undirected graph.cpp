    bool dfsrec(vector<int> adj[] , int s , vector<bool>&visited, int parent){
        visited[s] = true;
        for(auto u : adj[s]){
            if(!visited[u]){
                if(dfsrec(adj , u , visited , s))
                return true;
            }
            else if(u != parent)
               return true;
             
        }
        return false;
    }
    bool isCycle(int v, vector<int> adj[]) {
        // Code here
        vector<bool>visited(v, false);
        for(int i = 0; i< v ; i++){
            if(visited[i] == false){
                if(dfsrec(adj , i , visited , -1))
                return true;
            }
        
        }
        return false;
    }
