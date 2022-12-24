public:
    int numComponents(ListNode* temp, vector<int>& nums) {
        int ans= 0;
        unordered_map<int ,int>mp;
        for(auto v :nums){
            mp[v]++;
        }
        int size = nums.size();
        while(temp && temp->next){
           if( mp[temp->val] && mp[temp->next->val]){
                ans++;
                size-= 2;
            }
              temp = temp->next;
            }
            ans+= size;

            return ans;
    }
