 vector <int> countDistinct (int a[], int n, int k)
    {
        //code here.
        vector<int>ans;
        unordered_map<int , int>mp;
        for(int i = 0; i < k; i++){
              mp[a[i]]++;
        }
        ans.push_back(mp.size());
        int i = 0;
        for(int j = k ; j < n ; j++ ){
            mp[a[j]]++;
            mp[a[i]]--;
            if(mp[a[i]] == 0){
                mp.erase(a[i]);
    
            }
            ans.push_back(mp.size());
            i++;
        }
        
        return ans;
        
        
        
        
        
    }
