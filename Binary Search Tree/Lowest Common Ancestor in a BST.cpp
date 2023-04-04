Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   while(root){
       if(root->data < n1 and root->data <n2)
          root = root->right;
          
       else if(root->data > n2  and root->data >n1)
          root = root->left;
       
       else{
           return root;
       }
   }
}
