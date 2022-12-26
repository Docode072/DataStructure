int strStr(string hs, string need) {
       
        int n = need.size();
        if(n> hs.size()) return -1;
         for(int i = 0; i< hs.size()-n+1 ;i++){
            if(hs[i] == need[0]){
                if(hs.substr(i ,n) == need)
                return i;
           }
        }
    return -1;
    }
