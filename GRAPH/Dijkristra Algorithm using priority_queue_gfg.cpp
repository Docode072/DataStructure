// using priority queue

typedef pair<int , int>  pi;
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int s)
    {
        // Code here
        // using priority queue
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        vector<int>dist(V , 1e+9);
        dist[s] = 0;
        pq.push({0 , s});
        // Now, pop the minimum distance node first from the min-heap
        while(!pq.empty()){
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            // now go to all adjacency of node
            for(auto it : adj[node]){
                int edgewt = it[1];
                int adjnode = it[0];
                
                if(dis + edgewt < dist[adjnode]){
                    dist[adjnode] = dis + edgewt;
                    
                    // If current distance is smaller,
                    // push it into the queue.
                    pq.push({dis + edgewt , adjnode});
                }
            }
        }
        return dist;
    }
