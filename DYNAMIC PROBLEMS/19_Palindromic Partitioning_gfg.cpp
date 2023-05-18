bool isPalindrome(string s ,int i, int j){
        while(i<j)
        {
            if(s[i]!=s[j])
            return 0;
            i++;
            j--;
        }
        return 1;
    }

    int solve(string &s ,int i , int j,vector<vector<int>>&dp){
        if(i>=j) return 0;
        // If already is a palindrome, then no need to partitioning.
        if(isPalindrome(s ,i ,j)) return 0;
        // memorization
        if(dp[i][j]!=-1) return dp[i][j];
        
        int mn =INT_MAX;
        for(int k = i; k<j;k++){
            
            int left = dp[i][k] == -1 ? solve(s,i,k,dp) : dp[i][k] ;
            int right = dp[k+1][j] == -1 ? solve(s,k+1,j,dp) : dp[k+1][j] ;
            int temp = left + right+ 1 ;
            
            mn = min(mn, temp);
        }
        return dp[i][j] = mn;// Store and return our answer
    }
    int palindromicPartition(string str)
    {
        // code here
        int n = str.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int i = 0 , j =n-1;
        return solve(str, i ,j,dp);
    }
