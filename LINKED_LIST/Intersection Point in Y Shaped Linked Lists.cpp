int intersectPoint(Node* head1, Node* head2)
    {
        // Your Code Here
        int s1 = 0; int s2 = 0;
        Node *temp1 = head1;
        Node *temp2 = head2;
        while(temp1){
            s1++;
            temp1 = temp1->next;
        }
        while(temp2){
            s2++;
            temp2 = temp2->next;
        }
        int n = abs(s1-s2);
        temp1 = head1;
        temp2 = head2;
        while(s1 != s2){
        if(s1 > s2){
            temp1 = temp1->next;
            s1--;
            }
        
        else{
            temp2 = temp2->next;
            s2--;
             } 
        }
    
        while(temp1 !=NULL && temp1 != temp2){
           
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
         if(temp1== temp2){
                return temp1->data;
            }
        return -1;
    }
