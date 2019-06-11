{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);

    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
//Position this line where user code will be pasted.
void printList(struct Node* node)
{
    while (node!=NULL)
    {
        printf("%d ", (node)->data);
        node = (node)->next;
    }
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, l;
        cin>>n;
         struct Node* head = NULL;
      struct Node* tail = NULL;

        for(int i = 1; i <= n; i++)
        {
            cin>>l;
            append(&head,&tail, l);
        }
        head =pairwise_swap(head);
        printList(head);
        cout << endl;
    }
}
}
/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node *curr=head;
    while(curr!=NULL && curr->next!=NULL){
        int temp=curr->data;
        curr->data=curr->next->data;
        curr->next->data=temp;
        curr=curr->next->next;
    }

    return head;
}s
