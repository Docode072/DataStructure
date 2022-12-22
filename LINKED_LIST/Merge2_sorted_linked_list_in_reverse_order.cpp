/*

The structure of linked list is the following

struct Node
{
int data;
Node* next;
};

*/
struct Node *reverse_list(struct Node * head){
    struct Node * temp2, *prev = NULL;
    while(head){
        temp2= head->next;
        head->next = prev;
        prev = head;
        head = temp2;
        }
    head = prev;
    return head;
    
}

struct Node * mergeResult(Node *n1,Node *n2)
{
    // your code goes here
    struct Node *root = newNode(0);
    struct Node * temp = root;
    if(n1 == NULL) return n2;
    if(n2 == NULL) return n1;
    while(n1 && n2){
        if(n1->data <= n2->data){
            temp->next = n1;
            n1 = n1->next;
        }
        else{
            temp->next = n2;
            n2 = n2->next;
        }
        temp = temp->next;
    }
    if(n1){
        temp->next = n1;
    }
    if(n2){
        temp->next = n2;
    }
    
    return reverse_list(root->next);
    
}
