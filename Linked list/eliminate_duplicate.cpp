node* eliminate_duplicate(node* head)
{
  node* temp=head;
  while(temp->next!=NULL){
    
    if(temp->data==temp->next->data ){
      while(temp->data==temp->next->data && temp->next->next!=NULL){
        temp=temp->next;
      }
      if(temp->next->next==NULL){
        t2->next=temp->next->next;
      }else{
      	t2->next=temp->next;
      }
    }if(temp->next!=NULL){
    	temp=temp->next;
    }
  }
   return head;
}
