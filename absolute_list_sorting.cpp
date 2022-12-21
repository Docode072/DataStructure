class Solution{
    
public:
    Node* sortList(Node* head)
    {
        // Your Code Here
        Node* curr = head->next;
        Node *prev = head;
        while(curr){
          if(curr->data < prev->data)
         {
              prev->next = curr->next;
              // create a new node and add at starting of list
              curr->next =head;
              head = curr;
              curr = prev;
          } 
          else
              prev = curr;
          // move the curr
          curr = curr->next;
        }
        
        return head;
    }
};
