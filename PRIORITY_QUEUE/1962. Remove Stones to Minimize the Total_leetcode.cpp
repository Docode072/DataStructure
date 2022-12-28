 int minStoneSum(vector<int>& p, int k) {
        priority_queue<int>pq(p.begin() , p.end());
        int sum = accumulate(p.begin() , p.end() , 0);
        while(k--){
           int top= pq.top();
           pq.pop();
           sum -= top/2;
           pq.push(top- top/2);
       }
     
       return sum;
    }
