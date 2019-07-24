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

//Iterative
/*
1. find mid.
2. break int two and reverse mid to end.
3. merge the two linked lists alternatively.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    ListNode* temp;
    ListNode* prev;
    ListNode* mid = A;
    ListNode* curr = A;
    ListNode* newCurr;
    ListNode* newHead;
    ListNode* newTemp;
    ListNode* newPrev;

    if(A == NULL || A->next == NULL){
        return A;
    }

    while(curr != NULL && curr->next != NULL){
        prev = mid;
        mid = mid->next;
        curr = (curr->next)->next;
    }

    prev->next = NULL;

    newCurr = mid;

    while(newCurr != NULL){
        newTemp = newCurr->next;
        if(newCurr == mid){
            newPrev = newCurr;
            newCurr->next = NULL;
            newCurr = newTemp;
        }
        else{
            newCurr->next = newPrev;
            newPrev = newCurr;
            newCurr = newTemp;
        }
    }

    newHead = newPrev;
    newCurr = newHead;
    curr = A;

    while(newCurr != NULL && curr != NULL){
        prev = curr;
        newPrev = newCurr;
        temp = curr->next;
        newTemp = newCurr->next;

        curr->next = newCurr;
        if(temp != NULL){
            newCurr->next = temp;
        }
        curr = temp;
        newCurr = newTemp;
    }

    return A;
}
