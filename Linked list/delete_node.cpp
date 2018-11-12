Node* deleteNode(Node *head, int i) {
  if(i==0){
      Node* a = head;
      head=head->next;
      delete a;
      return head;
    }
 // int count=0;
  Node* temp=head;
  for(int count =0;count < i-1 && temp!=NULL;count++ ){
    temp=temp->next;
  }
  if(temp==NULL || temp->next==NULL){
    return head;
  }else{
    Node * a = temp->next;
    Node * b =  a->next;
    temp->next=b;
    delete a; 
    return head;
  }
 
}


