int minLaptops(int n, int s[], int e[]) {
        // Code here
       sort(s , s+n);
       sort(e , e+n);
       int cntcomp=1;
       int j = 0;
       for(int i = 1; i< n;i++){
            if(s[i] < e[j])
                 cntcomp++;
             
             else
                 j++;
        }
            
        return cntcomp;
        
    }
