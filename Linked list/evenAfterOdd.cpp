// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/

node* arrange_LinkedList(node* head)
{
    //write your code here
  node* oh=NULL;
  node* ot=NULL;
  node* eh=NULL;
  node* et=NULL;
  while(head!=NULL){
    if(head->data%2!=0 && oh==NULL){
      oh=head;
      ot=head;
    }else if(head->data%2==0 && eh==NULL){
      eh=head;
      et=head;
    }else if(head->data%2!=0){
      ot->next=head;
      ot=ot->next;
    }else if(head->data%2==0){
      et->next=head;
      et=et->next;
    }
    head=head->next;
  }
  if(oh!=NULL){
    ot->next=eh;
    return oh;
  }else{
    return eh;
  }
}
