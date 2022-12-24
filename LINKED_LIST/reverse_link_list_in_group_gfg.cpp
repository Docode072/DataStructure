struct node * r_list( struct node * head, int k){
         if(head == NULL || head->next == NULL) return head;
         struct node *curr = head,*prev =NULL ; 
         struct node *temp = curr; int ct =0;
         while(curr and ct<k){
            curr = curr->next;
            temp->next = prev;
            prev = temp;
            temp = curr;
            ct++;
            
         }
         
         if(temp != NULL){
             head->next = r_list(curr ,k);
             
         }
         
         return prev;
         
    }    
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
       return  r_list(head , k);
    }
