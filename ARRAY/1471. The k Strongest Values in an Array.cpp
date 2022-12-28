vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin() , arr.end()); vector<int>ans;
        int n = arr.size();
        const int m = arr[(n-1)/2];
        int i = 0; int j = n-1;
        while(ans.size() < k){
            if(m-arr[i] > arr[j]-m){
                ans.push_back(arr[i++]);
            }
            else{
                
                ans.push_back(arr[j--]);
            }
        }
        return ans;
    }
