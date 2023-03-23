//1 apprach
void solve(Node* root, vector<int>&ans , int level){
    // base case
    if(root == NULL) return ;
    // we entered in new level then size will be equal
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    solve(root->right , ans, level+1);
    solve(root->left , ans, level+1);
    
    
}
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ans;
       solve(root, ans , 0);
       return ans;
    }

/// second approach
/*
 vector<int> rightView(Node *root)
    {
       // Your Code here
        vector<int>v; 
       if(root == NULL)
       return v;
        
     
       queue<Node*>q;
       q.push(root);
       
       while(!q.empty()){
        
        int n = q.size();
        
        for(int i =0 ; i<n ;i++)
        {
          Node* curr = q.front();
          q.pop();
          
          if(i == n-1){
              v.push_back(curr->data);
          }
          if(curr->left!= NULL){
              q.push(curr->left);
          }
          if(curr->right!= NULL){
              
              q.push(curr->right);
          }
        }
        
       }
       return v;
       
    }
    */
