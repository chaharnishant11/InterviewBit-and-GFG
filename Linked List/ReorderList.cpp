void reorderList(Node* head)
{
    // Your code here
    if(head==NULL || head->next==NULL || head->next->next==NULL) return;
    Node* prev=NULL;
    Node* temp=head;
    Node* N=head->next;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    temp->next=head->next;
    head->next=temp;
    reorderList(N);
}
