ListNode* removeElements(ListNode* head, int val) {
       
        // if all the same val in link list
        while(head and head->val == val){
            head = head->next;
        }
        ListNode* p = head;
        while(p and p->next != NULL){
            if(p->next->val == val){
                p->next =p->next->next;
            }
            else
               p = p->next;
        }

        return head;
    }
