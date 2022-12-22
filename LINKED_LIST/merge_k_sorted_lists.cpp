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
    ListNode* mergeKLists(vector<ListNode*>& list) {
         vector<int>v;
         int sz = list.size();
         for(int i =0 ; i < sz ; i++){
             while(list[i]){
                 v.push_back(list[i]->val);
                 list[i] = list[i]->next;
             }
         }
         sort(v.begin(), v.end());
         ListNode* root = NULL;
         ListNode* temp, *p;
         for(auto value : v){
            p = new  ListNode;
            p->next = NULL;
            p->val = value;
            temp = p;
            if(root == NULL){
                root = temp;
            }
            else{
                temp = root;
                while(temp->next){
                    temp = temp->next;
                }
                temp->next = p;
            }
         }
         return root;
    }
};
