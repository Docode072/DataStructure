vector<int> answerQueries(vector<int>& v, vector<int>& q) {
        vector<int>ans;
        sort(v.begin() , v.end());
        for(int i = 1; i< v.size();i++) v[i] += v[i-1];
        for(auto x: q){
            int msize = upper_bound(v.begin(), v.end(), x)-v.begin();
            ans.push_back(msize);
        }
        return ans;

    }
