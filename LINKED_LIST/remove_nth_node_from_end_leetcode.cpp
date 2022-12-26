ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next) return head->next;
        int  size =0;
        ListNode* temp = head;
        while(temp){
            size++;
            temp = temp->next;
        }

        temp = head; int k = size-n-1;
        if(size == n) return head->next;
        while(temp && k--){
            temp = temp->next;
        }
       
        temp->next = temp->next->next;
    return head;
    }
