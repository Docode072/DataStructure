 Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here
       if(root== NULL)
          return NULL;
       if(root->data == n1 || root->data == n2){
           return root;
       }
       
       Node* leftans = lca(root->left ,n1 , n2);
       Node* rightans = lca(root->right ,n1 , n2);
       
       if(leftans != NULL and rightans != NULL){
           return root;
       }
       else if(leftans== NULL and rightans != NULL){
           return rightans;
       }
       else if(leftans != NULL and rightans == NULL){
           return leftans;
       }
       else{
           return NULL;
       }
    }
