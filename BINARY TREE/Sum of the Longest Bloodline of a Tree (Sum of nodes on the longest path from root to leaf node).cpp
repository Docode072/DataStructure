void solve(Node* root ,int sum , int &maxsum , int length , int &maxlen){
        if(root== NULL){
            if(length > maxlen){
                maxlen = length;
                maxsum = sum;
            }
            else if (length == maxlen){
                maxsum= max(sum , maxsum);
            }
            return;
        }
        sum += root->data;
        solve(root->left ,sum , maxsum , length+1 , maxlen);
        solve(root->right ,sum , maxsum , length+1 , maxlen);
        
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int sum = 0;
        int maxsum = INT_MIN;
        int length = 0; 
        int maxlen = 0;
        
        solve(root ,sum , maxsum , length , maxlen);
        return maxsum;
    }
