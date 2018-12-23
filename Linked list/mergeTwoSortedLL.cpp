/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

Node* mergeTwoLLs(Node *head1, Node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
  Node* t1;
  Node* t2;
  if(head1->data>head2->data){
    t1=head2;
    t2=head2;
    head2=head2->next;
  }else{
    t1=head1;
    t2=head1;
    head1=head1->next;
  }
  
  while(1){
    if(head1==NULL){
      t2->next=head2;
      return t1;
    }else if(head2==NULL){
      t2->next=head1;
      return t1;
    }
     if(head1->data<head2->data){
      t2->next=head1;
      head1=head1->next;
      t2=t2->next;
    }else{
      t2->next=head2;
      head2=head2->next;
      t2=t2->next;
    }
    
  }
}


