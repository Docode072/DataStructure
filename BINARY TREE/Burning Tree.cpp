Node* createNodetoParent(Node* root , int target , map<Node* , Node* >&nodeToParent){
        // first two step are done in this function
        if(root== NULL) return NULL;
        queue<Node*>q;
        q.push(root);
        Node* res = NULL;
        nodeToParent[root] = NULL;
        while(!q.empty()){
          Node* front = q.front();
          q.pop();
          if(front->data == target){
              res = front;
          }
          if(front->left){
              nodeToParent[front->left] = front;
              q.push(front->left);
              
          }
          if(front->right){
              nodeToParent[front->right] = front;
              q.push(front->right);
              
          }
          
        }
        return res;
    }
    
    int burntree(Node* root ,  map<Node* , Node* >&nodeToParent){
        // step 3rd is done here
        map<Node* , bool>visi;
        queue<Node*>q;
       
        q.push(root);
        visi[root] = true;
        
        int ans = 0;
        
        while(!q.empty()){
           int size = q.size();
           int flag = 0;
           
           for(int i = 0; i < size ; i++){
               Node* front = q.front();
               q.pop();
               if(front->left && !visi[front->left]){
                   q.push(front->left);
                   flag = 1;
                   visi[front->left]  = 1;
               }
               if(front->right && !visi[front->right]){
                   q.push(front->right);
                   flag = 1;
                   visi[front->right]  = 1;
               }
               if(nodeToParent[front] && !visi[nodeToParent[front]]){
                  flag = 1;
                  q.push(nodeToParent[front]);
                  visi[nodeToParent[front]] = 1;
               }
           }
           if(flag == 1){
               ans++;
           }
        
            
        }
        return ans;
    }
    int minTime(Node* root, int target) 
    {
        // step1 -> create node to parent mapping
        // step2-> find target node
        // step3 -> burn the tree with min time
        map<Node* , Node* >nodeToParent;
        Node* targetNode = createNodetoParent(root, target, nodeToParent);
        int ans = burntree(targetNode ,nodeToParent);
        
        return ans;
    }
