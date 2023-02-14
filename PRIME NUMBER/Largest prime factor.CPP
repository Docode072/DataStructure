 bool check(int n){
        if(n==1) return false;
        if(n==2) return true;
        for(int i = 2; i<= sqrt(n) ; i++){
            if(n % i == 0) return false;
        }
        return true;
    } 

    long long int largestPrimeFactor(int n){
        
        long long int ans = 0;
        if(check(n)) return n;
        for(int i = 2; i<=n/2 ; i++){
            if(check(i) and n%i == 0){
                if(i > ans){
                    ans = i;
                }
            }
        }
        return ans;
    }
