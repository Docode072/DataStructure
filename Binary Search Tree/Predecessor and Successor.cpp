void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here 
   pre = NULL;
   suc = NULL;
   
   Node* temp = root;
   while(temp){
       if(temp->key > key){
           temp = temp->left;
           suc = temp;
       }
       else{
           temp = temp->right;
       }
       
   }
   temp = root;
   while(temp){
       if(temp->key < key){
           temp = temp->right;
           pre = temp;
       }
       else{
           temp = temp->left;
       }
       
   }


}
