int solve(int arr[] , int i, int j,vector<vector<int>>&dp){
        if(i>= j)
            return 0;
        // memorization main step
        if(dp[i][j] != -1) return dp[i][j];
        int mn = INT_MAX;
        for(int k =i; k<=j-1;k++){
            int temp = solve(arr, i , k,dp)+solve(arr, k+1, j,dp)+arr[i-1]*arr[k]*arr[j];
            
            mn = min(temp , mn);
        }
        return dp[i][j]= mn;
    }
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int i = 1; int j = n-1;
        return  solve(arr , i , j,dp);
    }
