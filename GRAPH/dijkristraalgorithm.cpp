   int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>adj[n+1];
        for(int i=0;i<times.size();i++){
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        vector<int>time(n+1,1e9);
        set<pair<int,int>>s;
        s.insert({0,k});
        time[k]=0;
        while(!s.empty()){
            auto i=*(s.begin());
            int wt=i.first;
            int node=i.second;
            s.erase(s.begin());
            for(auto it:adj[node]){
                if(it.second+wt<time[it.first]){
                    time[it.first]=it.second+wt;
                    s.insert({time[it.first],it.first});
                }
            }
        }
        int ans = 0;
        for(int i=1;i<n+1;i++){
            if(time[i]==1e9){
                return -1;
            }
            ans = max(ans , time[i]);
        }
        return ans;

    }
