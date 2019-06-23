Node *removeDuplicates(Node *root)
{
 // your code goes here
 Node *temp=root;
 Node *prev=NULL;
 map<int,int> m;
 while(temp!=NULL){
     if(m.find(temp->data)==m.end()){
         m[temp->data]++;
         prev=temp;
        temp=temp->next;
     }else{
         prev->next=temp->next;
         temp=temp->next;
     }

 }
 return root;
}
