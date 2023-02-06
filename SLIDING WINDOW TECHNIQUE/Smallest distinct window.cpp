 int findSubString(string s)
    {
        // Your code goes here 
        unordered_map<char, int >mp;
        for(auto v : s){
             mp[v] = 0;
         }
        int n= mp.size(); 
        mp.clear();
        int c = 0;
        int i = 0; int j = 1;
        c++; mp[s[i]]++;
        int len = INT_MAX; int siz = s.size();
        while(i <= j and j < siz){
            if(c<n){
               if(mp[s[j]]==0) c++;
               mp[s[j]]++;
               j++;
            }
            if(c==n){
                len = min(len , j-i);
                if(mp[s[i]] == 1) c--;
                mp[s[i]]--;
                i++;
            }
        }
        while(c==n){
                len = min(len , j-i);
                if(mp[s[i]] == 1) c--;
                mp[s[i]]--;
                i++;
            }
         
        
        return len;
    }
