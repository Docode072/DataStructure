Node* buildTree(int inorder[], int lo[], int iStart, int iEnd,int n)
{
//add code here.
   Node* root = new Node(lo[0]);
   
   queue<Node*>q;
   q.push(root);
   int i =1;
   while(!q.empty() && i<n){
       
       Node* temp = q.front();
       q.pop();
       
       if(lo[i] != -1){
           temp->left = new Node(lo[i++]);
           q.push(temp->left);
       }
       if(lo[i] != -1){
           temp->right = new Node(lo[i++]);
           q.push(temp->right);
       }
       
   }
   
   return root;
    
}
