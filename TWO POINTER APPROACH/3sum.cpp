 vector<vector<int>>ans;
    vector<vector<int>> threeSum(vector<int>& arr) {
       sort(arr.begin() , arr.end());
       int n =arr.size();
        for(int i = n-1 ; i >= 2; i--){
            int a =0;
            int b = i-1;
            vector<int>vect;
            while(a < b){
                int sum = arr[a]+ arr[b]+arr[i];
                if(sum<0) {
                  a++;
                }
                else if(sum >0)
                   b--;
                else{
                   ans.push_back({arr[a] , arr[b] , arr[i]});
                   while(a < b && arr[a] == arr[a+1]) a++;
                   while(a < b && arr[b] == arr[b-1]) b--;
                   b--;
                }
            }
                while(i >=2 && arr[i] == arr[i-1]) i--;
            }
       return ans;  
    }
