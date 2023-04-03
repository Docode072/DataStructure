bool validationbst(Node* &root , int min , int maxi){
        if(root ==NULL) return true;
        if(root->data >min and root->data < maxi){
            bool left = validationbst(root->left , min ,root->data);
            bool right = validationbst(root->right , root->data , maxi);
            return left and right;
        }
        else{
            return false;
        }
        
    }
    bool isBST(Node* root) 
    {
        // Your code here
        return validationbst(root , INT_MIN ,INT_MAX);
    }
