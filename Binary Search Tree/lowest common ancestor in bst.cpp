TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
       TreeNode* tmp = NULL;
       while(root){
       if(root->val < p->val and root->val < q->val)
          root = root->right;
          
       else if(root->val > p->val  and root->val> q->val)
          root = root->left;
       
       else{
           tmp =  root;
           break;
       }
       }
       return tmp; 

    }
