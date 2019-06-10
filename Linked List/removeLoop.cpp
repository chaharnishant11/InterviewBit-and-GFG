//Method 1
void removeLoop(Node *loopN,Node *head){
    Node *slow=head;
    Node *fast=loopN;
    while(slow!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
    return;
}

void removeTheLoop(Node *head)
{
     //Your code here
     Node *slow=head;
     Node *fast=head;
     while(slow!=NULL && fast!=NULL && fast->next!=NULL){
         fast=fast->next->next;
         slow=slow->next;
         if(fast==slow){
             removeLoop(fast,head);
             break;
         }
     }

}

//Method 2
void removeLoop(Node *loop_node,Node *head){
    Node *ptr1 = loop_node;
    Node *ptr2 = loop_node;

    // Count the number of nodes in loop
    unsigned int k = 1, i;
    while (ptr1->next != ptr2)
    {
        ptr1 = ptr1->next;
        k++;
    }

    // Fix one pointer to head
    ptr1 = head;

    // And the other pointer to k nodes after head
    ptr2 = head;
    for (i = 0; i < k; i++)
      ptr2 = ptr2->next;

    /*  Move both pointers at the same pace,
      they will meet at loop starting node */
    while (ptr2 != ptr1)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    // Get pointer to the last node
    while (ptr2->next != ptr1)
       ptr2 = ptr2->next;

    /* Set the next node of the loop ending node
      to fix the loop */
    ptr2->next = NULL; ;
}

void removeTheLoop(Node *head)
{
     //Your code here
     Node *slow=head;
     Node *fast=head;
     while(slow!=NULL && fast!=NULL && fast->next!=NULL){
         fast=fast->next->next;
         slow=slow->next;
         if(fast==slow){
             removeLoop(fast,head);
             break;
         }
     }

}
