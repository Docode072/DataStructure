int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        int count = 0;
        unordered_set<int>st;
       // unordered_map<int , int>mp2;
        for(int i = 0; i< n ; i++){
            st.insert(a[i]);  
        }
        for(int i = 0; i< m ;i++){
            if(st.find(b[i]) != st.end()) count++;
            st.erase(b[i]);
        }
        return count;
    }
