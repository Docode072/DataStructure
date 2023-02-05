vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
       
       vector<long long>ans;                
       queue<long long int> q;
       for(int i = 0; i < k-1 ;i++){
           if(a[i] < 0)
              q.push(a[i]);
       }
       for(int i = k-1 ; i< n ; i++){
           if(a[i] < 0){
               q.push(a[i]);
           }
           if(!q.empty()){
               ans.push_back(q.front());
               if(q.front() == a[i-k+1])
               q.pop();
           }
           else{
               ans.push_back(0);
           }
          
           
          
       }
       
       return ans;
       
 }
