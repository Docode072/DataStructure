vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i = 0; i< n-2 ; i++){
            for(int j = i+1; j < n-1;j++){
                int a = j+1;
                int b = n-1;
                while(a<b){
                  long long sum = (long long)nums[i]+nums[j]+nums[a]+nums[b];
                  if(sum > target) b--;
                  else if(sum < target) a++;
                  else{
                      vector<int> quads(4, 0);
                        quads[0] = nums[i];
                        quads[1] = nums[j];
                        quads[2] = nums[a];
                        quads[3] = nums[b];
                        ans.push_back(quads);

                        a++; b--;

                        //Bypassing duplicates if any while moving front and back
                        while(a < b && nums[a] == quads[2])
                            a++;
                        while( a < b && nums[b] == quads[3])
                            b--;
                  }
                }
                while(j+1<n-1 && nums[j+1] == nums[j]) j++;
            }
                while(i+1<n-2 && nums[i+1] == nums[i]) i++;
        }
        return ans;
    }
