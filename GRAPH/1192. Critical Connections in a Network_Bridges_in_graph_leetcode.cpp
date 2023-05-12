class Solution {
public:
    // tc -> O(V+2E)
    // Sc--> O(3n+2E)
    // do the dfs traversal
    int timer = 1;
    void dfs(int node , int parent , int intime[] , int low[],vector<vector<int>>&bridges           ,vector<int>adj[] , vector<int>&vis){
        
        vis[node] = 1;
        intime[node] = low[node] = timer; // assign the inter and lowest time of dfs;
        timer++;
        
        for(auto it : adj[node]){
            if(it == parent) continue;
            
            if(vis[it] == 0){// if not visited
                dfs(it,node,intime,low,bridges,adj,vis);
                // node take lowest of (it)
                low[node] = min(low[node] , low[it]);
                // check for bridge
                if(intime[node] < low[it]){
                    bridges.push_back({node , it});
                }
                
            }
            //  if already visited
            else{
                // no matter if it is parent only take the low time of it
                low[node] = min(low[node] , low[it]);
            }
        }
    }
    
    
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int>vis(n ,0);
        vector<int>adj[n];
        // make adjacency list
        for(auto it : connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int time[n] , low[n];
        vector<vector<int>>bridges;
        dfs(0 , -1 ,time , low , bridges, adj, vis);
        
        return bridges;
        
    }
};
