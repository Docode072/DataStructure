 int longestUniqueSubsttr(string s){
        //code
        int mxl = 0; int n = s.size();
       int fq[26]= {0};
       int i = 0; int j = 0;
       while(j < n){
           if(fq[s[j]-'a'] == 0){
               fq[s[j]-'a']++;
               mxl = max(mxl , j-i+1);
               j++;
           }
           else{
               fq[s[i]-'a']--;
               i++;
           }
       }
        return mxl;
        
    }
