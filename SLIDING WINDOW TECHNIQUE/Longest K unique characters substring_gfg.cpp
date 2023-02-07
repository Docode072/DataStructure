 int longestKSubstr(string s, int k) {
    // your code here
        unordered_map<char,int> mp;
        int start = 0, ans = -1 , n = s.length();
        
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
            if(mp.size() == k){
                ans = max(ans,i-start+1);
            }
            else if(mp.size() > k){
                while(mp.size() > k){
                    mp[s[start]]--;
                    if(mp[s[start]] == 0)mp.erase(s[start]);
                    start++;
                }
            }
        }
        
        return ans;
    }
