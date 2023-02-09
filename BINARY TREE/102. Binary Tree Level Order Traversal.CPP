vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        vector<int>v;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
     
     while(!q.empty()){
         TreeNode *temp = q.front();
         q.pop();
          
         if(temp == NULL){
             // cout<<endl;
             ans.push_back(v);
             v.clear();
             if(!q.empty()){
                 q.push(NULL);
             }
              if(q.front()==NULL) return ans;
         }else{
            // cout<<temp->data<<" ";
             v.push_back(temp->val);
             if(temp->left){
                 q.push(temp->left);
             }
             if(temp->right){
                 q.push(temp->right);
             }
         }
         
     }

     return ans;
     
 }
