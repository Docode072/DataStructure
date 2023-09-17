void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here 
        // int skip = M-1;
        // int del = N-1;
        struct Node *curr = head;
        while (curr) {
            int skip = M - 1;
            int del = N;
    
            // Skip M nodes
            while (skip-- && curr) {
                curr = curr->next;
            }
    
            if (curr == NULL) {
                return; // Reached the end of the list
            }
    
            struct Node *nextdel = curr->next;
            
            // Delete N nodes
            while (del-- && nextdel) {
                struct Node *temp = nextdel;
                nextdel = nextdel->next;
                free(temp); // Free memory of the deleted node
            }

            curr->next = nextdel; // Update the next pointer of the current node
            curr = nextdel; // Move curr to the next node
        
        }
    }
