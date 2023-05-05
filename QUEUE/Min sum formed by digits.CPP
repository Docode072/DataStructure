long long int minSum(int arr[], int n)
    {
        // Your code goes here
        long long int ans = 0;
         priority_queue <int, vector<int>, greater<int> > pq;
         for(int i = 0; i <n ;i++){
             pq.push(arr[i]);
         }
         long long int x = 0;
         long long int y = 0; int idx = 1;
         while(!pq.empty()){
             if(idx%2 != 0){
                 x = x*10+pq.top();
                 idx++;
            }
            else{
                y = y*10+pq.top();
                idx++;
            }
            pq.pop();
         }
         ans = x+y;
         return ans;
    }
