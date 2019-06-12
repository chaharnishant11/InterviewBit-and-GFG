/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode* nodepre=NULL;
    ListNode* node=A;
    while(node!=NULL){
        ListNode *x=A;
        ListNode *pre= NULL;
        while(x!=node && node->val >= x->val){
            pre=x;
            x=x->next;
        }
        if(x!=node){
            nodepre->next=node->next;
            node->next=x;
            if(pre==NULL){
                A=node;
            } else
            pre->next=node;
        }
        nodepre=node;
        node=node->next;
    }
    return A;
}
