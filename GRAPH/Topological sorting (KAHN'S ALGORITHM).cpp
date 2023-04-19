vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    // code here
	    vector<int>in(v , 0);
	    vector<int>a;
	    for(int i = 0; i< v ; i++){
	        for(auto x : adj[i]){
	            in[x]++;
	        }
	    }
	    queue<int>q;
	    for(int i =0; i< in.size(); i++){
	        if(in[i] == 0){
	            q.push(i);
	        }
	    }
	    
	    while(!q.empty()){
	        int u = q.front();
	        q.pop();
	        a.push_back(u);
	        for(auto v : adj[u]){
	            in[v]--;
	            if(in[v] == 0){
	                q.push(v);
	            }
	        }
	    }
	    return a;
	    
	}
