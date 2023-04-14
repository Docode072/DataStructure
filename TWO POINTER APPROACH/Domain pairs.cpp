int dominantPairs(int n,vector<int> &a){
        sort(a.begin() , a.begin()+n/2);
        sort(a.begin()+n/2 , a.end());
        int count = 0;
        int i = 0; int j = n/2;
        
        while( i < n/2 && j < n){
            if(a[i] >= 5*a[j]){
               count+= n/2-i; 
               j++;
            }
            else{
                i++;
            }
        }
        return count;
    }  
