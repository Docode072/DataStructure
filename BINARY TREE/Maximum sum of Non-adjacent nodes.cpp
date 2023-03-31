pair<int,int> solve(Node* root){
        if(root == NULL){
            pair<int, int >p = {0,0};
            return p;
        }
        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);
        
        pair<int,int> res;
        res.first = root->data+left.second + right.second;
        res.second = max(left.first , left.second)+ max(right.first , right.second);
        
        return res;
        
        
    }
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int , int >result = solve(root) ;
        return max(result.first , result.second);
    }
