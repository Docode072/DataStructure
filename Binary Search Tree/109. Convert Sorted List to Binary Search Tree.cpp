TreeNode* solve(ListNode*left , ListNode *right){
        if(left== right) return NULL;
        ListNode* fast = left,* slow = left;
        while(fast!= right and fast->next != right){
            slow = slow->next;
            fast = fast->next->next;
            
        }
        TreeNode* root = new TreeNode(slow->val);
        root->left = solve(left, slow);
        root->right = solve(slow->next, right);
        
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL){
            TreeNode* root = new TreeNode(head->val);
            return root;
        }
        return solve(head , NULL);

    }
