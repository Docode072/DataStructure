int  check(long long n){
        if(n==1) return 0;
        if(n==2) return 1;
        for(int i = 2; i*i<= (n); i++){
            if(n % i == 0) return 0;
            
        }
        return 1;
    }
    long long primeProduct(long long l, long long r){
        // code here
        long long mod = (1e+9)+7;
        long long ans = 1;
        while(l <= r){
            if(check(l)){
                ans = (ans*l)%mod;
                }
            l++;
            
        }
    return ans%mod;
    }
