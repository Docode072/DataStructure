vector<int> inor;
    // root : the root Node of the given BST
    // target : the target sum
    void inorder(Node* root){
        if(root== NULL) return ;
        inorder(root->left);
        inor.push_back(root->data);
        inorder(root->right);
    }
    int isPairPresent(struct Node *root, int target)
    {
      //add code here.
        inorder(root);
        int n = inor.size();
        int i = 0 , j = n-1;
        while(i <= j){
            int d = inor[i]+inor[j];
            if(d == target){
                return 1;
            }
            else if(d>target){
                j--;
            }
            else{
                i++;
            }
        }
      
        return 0;
       
    }
