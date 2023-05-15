int solve(string s1 , string s2 ,int n, int m){
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
         
        return dp[n][m];
    }
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        int lcs = solve(X,Y,m,n);
        
        return X.size()+Y.size()-lcs;
        
    }
