class Solution{
private static int findPartitions(int[] arr, int target, int mod){
        int n = arr.length;
        int[][] dp = new int[n+1][target+1];
        dp[0][0] = 1;
        
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= target; j++){
                if(arr[i-1] <= j){
                    dp[i][j] = (dp[i-1][j - arr[i-1]]%mod + dp[i-1][j]%mod)%mod;
                }
                else{
                    dp[i][j] = dp[i-1][j]%mod;
                }
            }
        }
        return dp[n][target]%mod;
    }
    public int countPartitions(int n, int d, int arr[]){
        // Code here
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        int mod = (int) 1e9+7;
        if((sum + d)%2 != 0 || sum < 0 ) return 0;
        return findPartitions(arr, (sum + d)/2, mod);
    }

}
