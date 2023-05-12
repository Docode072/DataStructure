 void dfs(int node,vector<int> &vis,vector<vector<int>>& adj,stack<int> &st){
	    vis[node]=1;
	    for(auto it:adj[node]){
	        if(!vis[it])dfs(it,vis,adj,st);
	    }
	    st.push(node);
	}
	void dfs2(int node,vector<int> &vis,vector<int> adj[]){
	    vis[node]=1;
	    for(auto it:adj[node]){
	        if(!vis[it])dfs2(it,vis,adj);
	    }
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        // step 1 =>> store the order of vertices in 
        //decreasing order of finish time in dfs
        vector<int>vis(V , 0);
        stack<int>st;
        for(int i = 0; i< V; i++){
            if(!vis[i]){
                dfs(i , vis , adj , st);
            }
        }
        
        // step 2=> reverse the all the edge for that we can do dfs only for 
        // indivisual strongly conneted conponent
        vector<int>adjT[V];
        for(int i = 0; i< V; i++){
             // for re-use for all unvisited  
            vis[i]= 0;
            for(auto it: adj[i]){
                // now it is adjacent of i ie i->it
                // so we have to do i is adjacent of it ie. it->i
                adjT[it].push_back(i);
            }
        }
        
        // step3-> do dfs according to finish time we have calculated in step 1
        int scc = 0;
        while(!st.empty()){
            int node= st.top();
            st.pop();
            
            if(!vis[node]){
                dfs2(node, vis , adjT);
                scc++;
            }
        }
        return scc;
    }
    
