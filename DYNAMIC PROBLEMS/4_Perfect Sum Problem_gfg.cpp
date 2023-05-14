
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int modulo = (int)1e9+7;
        int dp[n+1][sum+1];
        for(int j=1;j<=sum;j++)
        {
            dp[0][j]=0;
        }
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=1;
        }
       
        for(int i =1; i< n+1;i++){
            for(int j=0;j < sum+1;j++){
                if(arr[i-1] <= j){
                    // include that last number dp[i-1][j-arr[i-1]]
                    // not include that last number dp[i-1][j]
                    // we need to consider both the cases and add both values
                    
                    dp[i][j] = (dp[i-1][j-arr[i-1]] % modulo + dp[i-1][j] % modulo);
                    // why modulo? It is mentioned in the question to prevent overflow
                    // why modulo after adding both cases? As, after addition the sum could overflow.
                }
                else{
                    dp[i][j] = dp[i-1][j]%modulo;
                }
            }
        }
        
        return dp[n][sum]%modulo;
        
	}
	  
