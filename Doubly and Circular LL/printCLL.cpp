void printList(struct Node *head)
{
  // code here
  struct Node *temp=head->next;
  printf("%d ",head->data);
  while(temp!=head){
      printf("%d ",temp->data);
      temp=temp->next;
  }
}
