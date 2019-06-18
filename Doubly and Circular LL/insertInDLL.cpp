void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node *curr=head;
   Node *Next=head->next;
   int c=0;
   while(curr->next!=NULL){
       curr=curr->next;
       c++;
   }
   if(pos>=c){
       Node *temp=new Node(data);
       temp->prev=curr;
       curr->next=temp;
   }else{
       curr=head;
       while(pos>0 && Next!=NULL){
           pos--;
           curr=curr->next;
           Next=curr->next;
       }
       Node *temp= new Node(data);
       temp->next=Next;
       Next->prev=temp;
       temp->prev=curr;
       curr->next=temp;
   }
}
