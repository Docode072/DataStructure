vector<int> sortA1ByA2(vector<int> a1, int n, vector<int> a2, int m) 
    {
        //Your code here
        vector<int>ans;
        sort(a1.begin() , a1.end());
        map<int ,int> mp;
        for(int i = 0 ; i< n ;i++){
            mp[a1[i]]++;
            
        }
        for(int i = 0 ; i< m ;i++){
             
            if(mp.find(a2[i]) != mp.end()){
                int t = mp[a2[i]];;
                while(t--){
                    ans.push_back(a2[i]);
                    mp[a2[i]]--;
                }
            }
        }
        
        for(auto v : mp){
            while(v.second--){
                ans.push_back(v.first);
            }
        }
        
        return ans;
        
    } 
