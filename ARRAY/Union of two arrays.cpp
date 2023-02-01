int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int cnt = 0;
        set<int>st;
        for (int i=0 ; i < n ; i++) {
             st.insert(a[i]);
        }
        for (int i=0 ; i < m ; i++) {
        st.insert(b[i]);
        }
        
        return st.size();
    }
