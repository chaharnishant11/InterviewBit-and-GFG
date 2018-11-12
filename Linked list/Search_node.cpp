
int indexOfNIter(Node *head, int n) {
  Node* temp=head;
  if(head->data==n){
    return 0;
  }
  /*int i=0;
  while(temp->next!=NULL){
    i++;
    temp=temp->next;
  }
  temp=head;*/
  int count=0;
  while( temp!=NULL && temp->next!=NULL){
    if(temp->data==n){
      return count;
    }
      count++;
      temp=temp->next;
  }
  if(temp->data==n){
    return count;
  }
  if(temp->next==NULL){
    return -1;
  }
    
}
