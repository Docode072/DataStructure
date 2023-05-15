class Solution {
public:
    string printLCS(string str1, string str2,int m , int n, vector<vector<int>> &t){
        
        int i=m;
        int j=n;
        string s="";
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                s.push_back(str1[i-1]);
                i--;
                j--;
            }
            else{
                if(t[i][j-1] > t[i-1][j])
                {   s.push_back(str2[j-1]);  // so we will pick the table value having smaller value , because it would be at last , after reversing the string 
                    j--;
                }
                else
                {   s.push_back(str1[i-1]);
                    i--;
                }
            }
        }
        
        while(i>0){
            s.push_back(str1[i-1]);    // if any characters left from str1
            i--;
        }
         while(j>0){
            s.push_back(str2[j-1]);   // if any characters left from str2
            j--;
        }
        
        reverse(s.begin(),s.end());
        
        return s;
        
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int m=str1.size();
        int n=str2.size();
        vector<vector<int>> t(m+1,vector<int>(n+1));
        
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0)
                t[i][j]=0;
            }
        }
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(str1[i-1]==str2[j-1])
                  t[i][j]=1+t[i-1][j-1];
                
                else
                  t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        
        
        string s=printLCS(str1,str2,m,n,t);
        
        return s;
    }
};
