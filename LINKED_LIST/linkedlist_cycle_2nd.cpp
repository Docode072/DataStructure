ListNode *detectCycle(ListNode *head) {
        ListNode * s = head;
        ListNode *f = head;
        ListNode *entry = head;
        while(f && f->next){
            s = s->next;
            f = f->next->next;
            if(f == s){
                while(entry != s){
                    entry = entry->next;
                    s= s->next;
                }
            }
            if(entry == s) return entry;
        }
        return NULL;
    }
