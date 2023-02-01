 int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      map<int , int> mp;
      for(int i = 0; i< N ; i++){
          mp[arr[i]]++;
      }
      int k = 0;
      for(auto v: mp){
          if(v.second--){
              arr[k] = v.first;
              k++;
          }
      }
      int subarr = 1; int maxi = 1;
      for(int i = 0; i < N-1 ;i++){
         
          if(arr[i+1]-arr[i] == 1){
              subarr++;
             }
          else if(arr[i+1]-arr[i] == 0){
              continue;
          }
          else{
              subarr = 1;
          }
           maxi = max(maxi , subarr);
      }
      
      return maxi;
    }
