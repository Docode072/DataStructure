ListNode* rotateRight(ListNode* head, int k) {
        int n = 0;
        if(head == NULL || head->next == NULL) return head;
         ListNode* curr = head; ListNode* kthNode ;ListNode*headNth;
        while(curr){
            n++;
            curr= curr->next;
        }
        int shift = (n - k % n) - 1; // store the size to reverse n two part
        curr  = head;
        while(shift--){
            curr = curr->next;
        }
        kthNode = curr;
        while(curr->next)
            curr= curr->next;
        
        curr->next = head;
        headNth = kthNode->next;
        kthNode->next = NULL;

        return headNth;

    }
