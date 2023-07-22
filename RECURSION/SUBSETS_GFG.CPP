class Solution
{
    public:
    vector<vector<int> >ans;
    void generate(vector<int>subset, int i, vector<int>nums){
        if(i == nums.size()){
            ans.push_back(subset);
            return;
        }
        // ith element not included
        generate(subset , i+1 , nums);
        
        // now ith element included
        subset.push_back(nums[i]);
        generate(subset , i+1 , nums);
        subset.pop_back();
    }
    vector<vector<int> > subsets(vector<int>& nums)
    {
        //code here
        vector<int>subset;
        generate(subset , 0 , nums);
        sort(ans.begin() , ans.end());
        return ans;
        
    }
};
