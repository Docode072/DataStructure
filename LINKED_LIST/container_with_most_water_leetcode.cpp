int maxArea(vector<int>& ht) {

        int i = 0, j = ht.size()-1; 
        int water= 0;
        int h =0;
        while(i <j){
           h = min(ht[i] , ht[j]);
           water = max(water , (j-i)*h);
           if(ht[i]< ht[j])
             i++;
            else 
             j--;

        }
        

        return water;

        
    }
