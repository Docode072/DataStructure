int ans = 0; int n = 0;
    
    void solve(Node* root, int k){
        if(root == NULL) return;
        //right
        solve(root->right, k);
        // root (N)
        n++;
        if(k == n){
            ans = root->data;
        }
        // left
        solve(root->left , k);
    }
    int kthLargest(Node *root, int k)
    {
        //Your code here
        solve(root , k);
        return ans;
    }
