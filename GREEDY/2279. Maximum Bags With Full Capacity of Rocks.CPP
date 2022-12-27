int maximumBags(vector<int>& cap, vector<int>& rocks, int addrock) {
         vector<int>rcap(cap.size()); int ans =0;
        for(int i = 0 ; i< cap.size(); i++)
            rcap[i]= cap[i]-rocks[i];
        sort(rcap.begin() , rcap.end());
        for(int i = 0 ; i< cap.size(); i++){
           
            if(addrock >= rcap[i]){
                 addrock -= rcap[i];
                 ans++;
            }
            else
                break;
            }
            return ans;
        
    } 
