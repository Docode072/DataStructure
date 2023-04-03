TreeNode* inordersucc(TreeNode* root){
        TreeNode* p = root;
        while(p and p->left){
            p= p->left;
        }
        return p;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
       if(root==NULL)
        {
            return root;
        }
        if(root->val>key)
        {
            root->left=deleteNode(root->left,key);
        }
        else if(root->val<key)
        {
            root->right=deleteNode(root->right,key);
        }
        else{
            if(root->left==NULL)
            {
                TreeNode *temp=root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL)
            {
                TreeNode *temp=root->left;
                delete root;
                return temp;
            }
            TreeNode *temp=inordersucc(root->right);
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);
        }
        return root;
    }
