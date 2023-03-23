vector <int> bottomView(Node *root) {
        // Your Code Here
          //Your code here
        vector<int>ans;
        map<int, int>topnode;
        queue<pair<Node* , int> >q; // node + horizontal distance
        q.push(make_pair(root , 0));
        while(!q.empty()){
           pair<Node*,int> frontnode = q.front();
           q.pop();
           Node* temp = frontnode.first;
           int hd = frontnode.second;
           
            topnode[hd] = temp->data;
            if(temp->left){
                q.push({temp->left , hd-1});
                
            }
            if(temp->right)
                q.push({temp->right , hd+1});
            
            }
        for(auto  i :topnode){
           ans.push_back(i.second);  
        }
        return ans;
    }
