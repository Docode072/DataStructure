// O(n) time complexity
int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        // Kadanes algorithm
        int maxi = nums[0]; int sum = 0;
        for(int i = 0; i< nums.size(); i++){

            sum += nums[i];
            maxi = max(maxi , sum);
            if(sum <0) 
              sum = 0;
        }

        return maxi;

    }
