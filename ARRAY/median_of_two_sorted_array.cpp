    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp = nums1;
        double ans =0;
        for(auto v : nums2){
            temp.push_back(v);
        }
        sort(temp.begin() , temp.end());
        int n = temp.size();
        if(n%2 == 0){
           ans =(temp[n/2-1]+temp[n/2])/2.0;
        }
        else
           ans = temp[n/2];

           return ans;

    }
