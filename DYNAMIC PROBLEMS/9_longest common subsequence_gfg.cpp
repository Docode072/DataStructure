// recurtion memorization

int solve(int n , int m,string s1, string s2, int dp[][1001]){
        if(n==0 || m==0)
            return 0;
        if(dp[n][m] != -1) return dp[n][m];
        if(s1[n-1] == s2[m-1]){
            return dp[n][m] = 1+solve(n-1,m-1,s1,s2,dp);
        }
        else{
            return  dp[n][m] = max(solve(n,m-1,s1,s2,dp), solve(n-1,m , s1,s2,dp));
        }
    }
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
    int dp[1001][1001];
       
       for(int i=0; i<1001; i++) {
           for(int j=0; j<1001; j++) {
               dp[i][j]=-1;
           }
       }
        
        return solve(n , m , s1,s2,dp);
        
    }

// 2) top down approach (tabulation method)
 int lcs(int n, int m, string s1, string s2)
    {
        // your code here
    // top-down apporach (tabular method)
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
