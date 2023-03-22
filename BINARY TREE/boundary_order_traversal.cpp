void traversal_left(Node* root , vector<int>&ans){
        if(root == NULL || (root->left == NULL and root->right == NULL))
          return ;
        ans.push_back(root->data);
        if(root->left){
            traversal_left(root->left , ans);
        }
        else{
            traversal_left(root->right , ans);
        }
    }
    void traversal_leaf(Node* root , vector<int>&ans){
        if(root == NULL) return ;
        if((root->left == NULL and root->right == NULL)){
          ans.push_back(root->data);
          return ;
        }
        traversal_leaf(root->left , ans);
        traversal_leaf(root->right , ans);
       }
    void traversal_right(Node* root , vector<int>&ans){
        if(root == NULL || (root->left == NULL and root->right == NULL))
          return ;
        
        if(root->right){
            traversal_right(root->right , ans);
        }
        else{
            traversal_right(root->left , ans);
        }
        ans.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        
        vector<int>ans;
        if(root == NULL) return ans;
        ans.push_back(root->data);
        // left traverse exclusive  leaf
        traversal_left(root->left , ans);
        // leaf traversal
        traversal_leaf(root->left , ans);
        traversal_leaf(root->right , ans);

        // right part with reverse
        traversal_right(root->right ,ans);
        
        return ans;
    }
