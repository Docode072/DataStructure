int getOddOccurrence(int arr[], int n) {
        // code here
    
        // Complete the function
        unordered_map<int , int> m;
        for(int i = 0; i< n ;i++){
            m[arr[i]]++;
            
        }
        for(int i = 0; i< n ; i++){
            if(m[arr[i]]%2 !=0) return arr[i];
        }
        return -1;
    
    }
