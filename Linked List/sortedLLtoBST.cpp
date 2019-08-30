/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
TreeNode* Solution::sortedListToBST(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==NULL){
        return NULL;
    }if(A->next==NULL){
        TreeNode *root=new TreeNode(A->val);
        return root;
    }
    ListNode *slow=A;
    ListNode *fast=A;
    ListNode *prev=NULL;
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    int data=slow->val;
    //ListNode *right=slow->next;
    if(prev) prev->next=NULL;
    TreeNode *root=new TreeNode(data);
    root->right=sortedListToBST(slow->next);
    root->left=sortedListToBST(A);
    return root;
}
