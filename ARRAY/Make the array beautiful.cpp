vector<int> makeBeautiful(vector<int> arr) {
        // code here
        vector<int>ans;
        for(auto i : arr){
            if(ans.size() == 0){
                ans.push_back(i);
            }
            else if((ans[ans.size()-1] >= 0 && i  < 0 ) || (ans[ans.size()-1] < 0 && i >= 0)){
                ans.pop_back();
            }
            else
               ans.push_back(i);
        }
        return ans;
    }
