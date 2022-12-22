class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        if(head == NULL || head->next == NULL) return head;
        while(temp && temp->next)
        {
            swap(temp->val, temp->next->val);
            temp = temp->next->next;
        }
        return head;
    }
};
