class Solution{
    public:
    class info{
        public:
        int maxi;
        int mini;
        bool isBst;
        int size;
        
    };
    
    info solve(Node* root , int &ans){
        if(root == NULL){
            return {INT_MIN , INT_MAX , true , 0};
        }
        info left = solve(root->left , ans);
        info right = solve(root->right, ans);
        
        info currnode ;
        currnode.size = left.size + right.size +1;
        currnode.maxi = max(root->data , right.maxi);
        currnode.mini = min(root->data , left.mini);
        if((left.isBst && right.isBst) && (root->data > left.maxi && root->data < right.mini)){
            currnode.isBst = true;
        }
        else
            currnode.isBst = false;
            
        // update the answer
        if(currnode.isBst){
            ans = max(ans , currnode.size);
        }
        
        return currnode;
        
    }
    
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root)
    {
    	//Your code here
    	int maxSize = 0;
    	info ans = solve(root , maxSize);
    	return maxSize;
    }
};
