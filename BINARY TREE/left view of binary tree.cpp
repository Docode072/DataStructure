void solve(Node* root, vector<int>&ans , int level){
    // base case
    if(root == NULL) return ;
    // we entered in new level then size will be equal
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    solve(root->left , ans, level+1);
    solve(root->right , ans, level+1);
    
}

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   
   solve(root, ans , 0);
   return ans;
}
