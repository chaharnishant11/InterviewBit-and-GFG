ListNode* reverse(ListNode* A,int l){
    ListNode* curr=A;
    ListNode* Next=NULL;
    ListNode* prev=NULL;
    while(l>0 && curr!=NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
        l--;
    }
    if(curr==NULL){
        return prev;
    }
    else{
        A->next=curr;
        return prev;
    }

}
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    if(A->next==NULL){
        return A;
    }
    int l=1;
    ListNode* prev=NULL;
    ListNode* curr=A;
    while(l<B){
        l++;
        prev=curr;
        curr=curr->next;
    }
    if(curr==A){
       A = reverse(curr,C-B+1);
    }else{
        prev->next=reverse(curr,C-B+1);
    }

    return A;
}
