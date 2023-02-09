 Node* buildTree(int inorder[],int preorder[], int n)
    {
       if(n==0){
            return NULL;
        }
        Node* root = (struct Node*)malloc(sizeof(struct Node));
        root->data = preorder[0];
        root->left = NULL;
        root->right = NULL;
        int indx  =0;
        for(int i=0; i<n; i++){
            if(inorder[i]==root->data){
                indx = i; break;
            }
        }
        root->left = buildTree(inorder, preorder+1, indx);
        root->right = buildTree(inorder+indx+1, preorder+indx+1, n-indx-1);
        return root;
        
    }
