vector<ListNode*> splitListToParts(ListNode* head, int k) {
         vector<ListNode*>ans(k);
         ListNode*cur = head;
         int n=0; int rem;
         while(cur){
             n++;
             cur = cur->next;
         }
         rem = n%k; int width = n/k;
         cur = head;
         for(int i = 0; i<k; i++){
             ListNode* root = new ListNode(0);
             ListNode *subl = root;
             for(int j = 0; j<width+(i<rem ? 1: 0); j++){
                 subl = subl->next = new ListNode(cur->val);
                 if(cur != NULL)
                  cur = cur->next;
             }
             ans[i] = root->next;
         }
         return ans;
    }
