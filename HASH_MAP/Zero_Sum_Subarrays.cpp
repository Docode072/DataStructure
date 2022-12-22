class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        long long int cnt = 0;
        unordered_map<int,int>mp; long long int sum = 0;
        for(auto v : arr){
            sum += v;
            if(sum==0)
                 cnt++;
            if(mp.find(sum) != mp.end()){
               int k = mp[sum]++;
               cnt+= k;
            }
            else
             mp[sum]++;
            
        }
        return cnt;
        
    }
};
