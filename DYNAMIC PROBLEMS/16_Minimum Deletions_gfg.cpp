 int minimumNumberOfDeletions(string s1) { 
        // code here
        string t = s1;
        reverse(t.begin() , t.end());
        string s2 = t;
    
    // top-down apporach (tabular method)
        int n = s1.size();
        int m = n;
        int dp[n+1][m+1];
        for(int i=0; i<n+1; i++) {
           for(int j=0; j<m+1; j++) {
               if(i == 0 || j==0)
                dp[i][j] = 0;
            }
       }
        
       for(int i =1;i<n+1;i++)
         for(int j=1;j<m+1;j++){
             if(s1[i-1]== s2[j-1]){
                 dp[i][j] = 1+dp[i-1][j-1];
             }
             else{
                 dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
             }
         }
         
        int lcs = dp[n][m];
        return n-lcs;
    } 
