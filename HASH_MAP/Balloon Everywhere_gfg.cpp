 int maxInstance(string s){
        unordered_map<char , int>m1, m2;
        for(auto v : s){
            m1[v]++;
        }
        string t = "balloon";
        for(int i = 0; i< t.size(); i++){
            m2[t[i]]++;
        }
        int mini = INT_MAX;
        for(int i = 0; i < t.size() ; i++){
            mini = min(mini , m1[t[i]]/m2[t[i]]);
        }
        return mini;
    }
