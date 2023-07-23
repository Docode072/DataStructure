class Solution {
public:
   void permutation(vector<int>&ds, int freq[] , vector<vector<int>> &ans, vector<int>&nums){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return ;
        }
       for(int i = 0; i < nums.size() ; i++){
           if(!freq[i]){
               ds.push_back(nums[i]);
               freq[i] = 1;
               permutation(ds, freq, ans , nums);
               freq[i] = 0;
               ds.pop_back();
           }
       }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i] =0;
        vector<int>ds;
        permutation(ds, freq , ans, nums);
        return ans;
    }
};
