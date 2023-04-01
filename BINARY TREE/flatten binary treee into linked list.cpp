void flatten(Node *root)
    {
        // MORRIS travseral 
        // tm complexity=> o(n)
        // space comp=> o(1)
        Node* curr = root ;
        Node * pre;
        
        while(curr != NULL){
            if(curr->left != NULL){
                // find predecessor of current
                pre = curr->left;
                while(pre->right != NULL){
                    pre = pre->right;
                }
                pre->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
