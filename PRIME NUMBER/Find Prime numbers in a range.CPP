class Solution {
  private:
       bool check(int n){
        if(n==1) return false;
        if(n==2) return true;
        for(int i = 2; i<= sqrt(n) ; i++){
            if(n % i == 0) return false;
        }
        return true;
    } 
  public:
    vector<int> primeRange(int s, int e) {
        // code here
        vector<int>ans;
        while(s <= e){
            if(check(s))
             ans.push_back(s);
            s++;
        }
        return ans;
    }
};
