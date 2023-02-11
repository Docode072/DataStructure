int getMinimumDays(int n,string s, vector<int> &p){
        // code here
        int day = 0; int pair = 0;
        for(int i = 1; i < n; i++){
            if(s[i]== s[i-1]) pair++;
        }
        if(pair == 0) return 0;
        int i = 0;
        for(i = 0 ; i< n ; i++){
            
            int idx = p[i];
            if(idx != 0 && s[idx]== s[idx-1]){
                pair--;
            }
            if(idx != n-1 and s[idx] == s[idx+1]){
                pair--;
            }
            if(pair == 0){
                return i+1;
            }
            s[idx] = '?';
            
        }
        return day;
        
    }
