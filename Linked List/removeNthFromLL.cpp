ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
    if(head==NULL){
           return NULL;
    }
    ListNode *ptr,*last;
    ptr=last=head;
    int len = 0;
    while(last!=NULL){
        last=last->next;
        len++;
    }
    if(n>=len)
    return head->next;

    int respos = len - n-1;
    while(respos!=0){
        ptr=ptr->next;
        respos--;
    }
    ptr->next=ptr->next->next;
}
