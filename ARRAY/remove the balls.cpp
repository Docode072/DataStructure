int finLength(int n, vector<int> col, vector<int> rad) {
        
        vector<vector<int>>ans;
        for(int i = 0; i < n; i++){
            if(ans.size() == 0){
                ans.push_back({col[i] , rad[i]});
            }
            else if((ans[ans.size()-1][0] == col[i]) and (ans[ans.size()-1][1] == rad[i])){
                ans.pop_back();
            }
            else
               ans.push_back({col[i] , rad[i]});
        }
        return ans.size();
    }
