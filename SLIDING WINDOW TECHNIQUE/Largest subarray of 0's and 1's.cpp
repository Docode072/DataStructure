 int maxLen(int a[], int n)
    {
        // Your code here
        unordered_map<int , int>mp;
        for(int i = 0; i< n ; i++){
            if(a[i] == 0){
                a[i] = -1;
            }
        }
        for(int i = 1; i< n ; i++){
           a[i] += a[i-1];
        }
        mp[0] = -1;
        int mx = 0;
        for(int i = 0 ; i< n ; i++){
            if(mp.find(a[i]) != mp.end()){
                mx = max(mx , i-mp[a[i]]);
            }
            else{
                mp[a[i]] = i;
            }
        }
        return mx;
        
        
    }
