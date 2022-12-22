/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        ListNode* root =NULL; ListNode* p , *temp;
       
        
        while(l1 && l2){
            p = new  ListNode;
            p->next = NULL; 
            if(l1->val<=l2->val){
                p->val = l1->val;
               l1 = l1->next;
            }
            else{
                p->val = l2->val;
                l2 = l2->next;
            }
            if(root ==NULL){
                root = p;
            }
            else{
                temp = root;
                while(temp->next){
                    temp = temp->next;
                }
                temp->next = p;
            }
         

        }
        if(l1){
              temp = root;
               while(temp->next){
                    temp = temp->next;
                }
                temp->next = l1;

        }
         if(l2){
              temp = root;
               while(temp->next){
                    temp = temp->next;
                }
                temp->next = l2;
         }
        return root;
    }
};
