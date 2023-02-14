 vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        vector<int>ans;
        vector<int>temp(101 , 0);
        for(int i  = 0; i< n ; i++){
            if(temp[arr[i]] == 0){
              ans.push_back(arr[i]);
              
            }
            temp[arr[i]] = 1;
             
        }
        return ans;
    }
