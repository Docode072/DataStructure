 vector<int> asteroidCollision(int n, vector<int> &ast) {
        // code here
        stack<int>s; vector<int>ans;
        int i = 0;
        while(i<n){
            if(s.empty())
               s.push(ast[i]) , i++;
            else{
                if((ast[i]>0 && s.top() >0) || (ast[i] < 0 &&s.top()<0) or (ast[i] > 0 and s.top() < 0) )
                   {
                       s.push(ast[i]); i++;
                   }
                   
                 else if(ast[i] <0 and s.top() >0){
                     int a = s.top();
                     s.pop();
                     if(a == abs(ast[i]))
                      i++;
                     else if(a > abs(ast[i])){
                       s.push(a);
                       i++;
                     }
                      else if(a < abs(ast[i]))
                      continue;
                      
                      
                       
                 }
                 
            }
            
        }
        
        while(!s.empty()){
            int a = s.top();
            s.pop();
            ans.push_back(a);
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    
    }
