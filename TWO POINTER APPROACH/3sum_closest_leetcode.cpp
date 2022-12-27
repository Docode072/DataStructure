int threeSumClosest(vector<int>& arr, int target) {
       sort(arr.begin() , arr.end());
       int n =arr.size();
       int diff = INT_MAX ,ans = 0;
       for(int i = n-1 ; i >= 2; i--){
            int a =0; int b = i-1;
            while(a < b){
                int sum = arr[a]+ arr[b]+arr[i];
                if(sum== target) return target;
                if(abs(sum - target) < diff) diff = abs(sum - target), ans = sum; 
                if(sum<target) a++;
                else if(sum >target)b--;
               }
               
            }
       return ans;  
    }
