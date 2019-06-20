void sortedInsert(struct node** head_ref, int data)
{
    // Code here
    node *temp = newNode(data);
    if(!head_ref)
        *head_ref = temp;
    node *curr = *head_ref, *prev = NULL;
    while(curr != NULL){
        if(curr->data > data)
            break;
        prev = curr;
        curr = curr->next;
    }
    if(!prev){
        temp->next = *head_ref;
        *head_ref = temp;
    }else{
        prev->next = temp;
        temp->next = curr;
    }
}
