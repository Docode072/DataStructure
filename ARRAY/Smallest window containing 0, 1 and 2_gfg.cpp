int smallestSubstring(string s) {
        // Code here
        int check[3] ={0};
        for(auto c : s) check[c-'0']++;
        
        for(int i = 0; i< 3 ;i++){
            if(check[i]==0) return -1;
        }
        int ans = INT_MAX; int one , two , zero ; one = two = zero =-1;
        for(int i = 0 ; i< s.size() ; i++){
            if(s[i] == '0') zero = i;
            else if(s[i] == '1') one = i;
            else if(s[i] == '2')two = i;
            
            if(one !=-1 && zero != -1 && two != -1){
                int mn = min(zero , min(one, two));
                int mx = max(zero , max(one, two));
                
                ans = min(ans , mx-mn+1);
            }
        }
        if(ans == INT_MAX) return -1;
        
        return ans;
        
    }
