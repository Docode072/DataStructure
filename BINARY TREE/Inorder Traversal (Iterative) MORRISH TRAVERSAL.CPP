vector<int> inOrder(Node* root)
    {
        //code here
        Node* curr = root;
        Node* pre ;
        
        vector<int>inord;
        if(root == NULL) return inord;
        while(curr != NULL){
            if(curr->left == NULL){
                inord.push_back(curr->data);
                curr = curr->right;
            }
            else{
                // /* Find the inorder predecessor of current */
                pre = curr->left;
                while(pre->right != NULL && pre->right != curr){
                    pre = pre->right;
                }
                /* Make current as the right child of its
               inorder predecessor */
               if(pre->right == NULL){
                    pre->right = curr;
                    curr = curr->left;
               }
               /* Revert the changes made in the 'if' part to
               restore the original tree i.e., fix the right
               child of predecessor */
               else{
                   pre->right = NULL;
                   inord.push_back(curr->data);
                   curr = curr->right;
               }
            }
        }
        return inord;
    }
