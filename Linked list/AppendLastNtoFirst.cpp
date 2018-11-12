node* append_LinkedList(node* head,int n)
{
  node* temp = head;
  int i=0;
  while(temp->next!=NULL){
    i++;
    temp=temp->next;
  }
  i=i-n;
  node * tail=temp;
  temp = head;
  
  while(i>0){
    temp=temp->next;
    i--;
  }
  node * a=head;
  head=temp->next;
  tail->next=a;
  temp->next=NULL;
 
  return head;
}
