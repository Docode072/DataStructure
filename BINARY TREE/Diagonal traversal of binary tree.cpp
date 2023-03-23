vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
       Node* front =  q.front();
       q.pop();
       while(front){
           if(front->left){
               q.push(front->left);
           }
           ans.push_back(front->data);
           front = front->right;
       }
   }
   return ans;
}
