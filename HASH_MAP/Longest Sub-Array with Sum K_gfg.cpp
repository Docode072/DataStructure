int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
        map<int , int>mp; mp[0] = -1;
        int l = 0;
        int sum = 0;
        for(int i = 0; i < N ; i++){
            sum += A[i];
            
        if(mp.find(sum - k) != mp.end()){
            l = max(l , i-mp[sum-k]);
        }
        if(mp.find(sum) == mp.end())
            mp[sum] = i;
        }
        return l;
    } 
