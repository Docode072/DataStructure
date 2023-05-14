 int count(vector<int>& arr,int n, int sum) 
    { 
        // Your code goes here
        int mod = (int)1e9+7;
        
        int t[n+1][sum+1];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0){
                    t[i][j]=0;
                }
                if(j==0){
                    t[i][j]=1;
                }
            }
        }
            
            for(int ii=1;ii<n+1;ii++){
            for(int j=0;j<sum+1;j++){
                if(arr[ii-1]<=j){
                    t[ii][j]=(t[ii-1][j-arr[ii-1]]%mod)+(t[ii-1][j]%mod);
                }else{
                    t[ii][j]=t[ii-1][j]%mod;
                }
            }
            }
            
            return t[n][sum]%mod;
        }
  
    int findTargetSumWays(vector<int>&arr ,int target) {
        //Your code here
        int n = arr.size();
        int d =target;
        int s=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
        }
        if(s-d<0 || (s-d)%2==1){
            return 0;
        }
        int sum = ((s-d)/2);

        return count(arr,n,sum);
        
    }
