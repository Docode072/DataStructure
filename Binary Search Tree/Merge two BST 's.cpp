void inorder(Node* root , vector<int>& in){
        if(root == NULL){
            return;
        }
        inorder(root->left , in);
        in.push_back(root->data);
        inorder(root->right , in);
    }
    
    // to merge both inorder arrays
   
    vector<int> merge2Array(vector<int>&v1,vector<int>&v2){
       vector<int>ans;
       
       int i=0,j=0;
       
       while(i<v1.size() && j<v2.size()){
           if(v1[i]<v2[j]){
               ans.push_back(v1[i]);
               i++;
           }
           else{
               ans.push_back(v2[j]);
               j++;
           }
       }
       
       while(i<v1.size()){
           ans.push_back(v1[i]);
           i++;
       }
       while(j<v2.size()){
           ans.push_back(v2[j]);
           j++;
       }
       
       return ans;
    }
    
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    /*Node* inorderToBst(vector<int>&mergeArr , int s , int e){
        if( s > e){
            return NULL;
        }
        int mid = (s+e)/2;
        Node * root = new Node(mergeArr[mid]);
        root->left = inorderToBst(mergeArr , s , mid-1);
        root->right = inorderToBst(mergeArr , mid+1 , e);
        
        return root;
    }
    */
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       vector<int>b1 ,b2;
       inorder(root1 , b1);
       inorder(root2 , b2);
       
       
       return merge2Array(b1, b2);
       
    }
