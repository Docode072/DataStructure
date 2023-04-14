void dfs(vector<int> adj[], int s , vector<int> visited , vector<int> &ans){
        visited[s] = true;
        ans.push_back(s);
        for(auto &u : adj[s]){
            if(visited[u] == false){
                dfs(adj , u , visited , ans);
            }
        }
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
       vector<int>ans;
       vector<bool>visited(v+1 ,false);
       dfs(adj , 0 , visited , ans);
       return ans;
    }
