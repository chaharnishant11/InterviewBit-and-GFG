set<int> s;
  Node *p=*head1;
  while(p!=NULL)
  {
      s.insert(p->val);
      p=p->next;
  }
  Node *q=*head2;
  set<int> s1;
   while(q!=NULL)
  {
      s1.insert(q->val);
      q=q->next;
  }
  for(auto itr=s1.begin();itr!=s1.end();itr++)
  {
     if(s.find(*itr)!=s.end())
     push(head3,*itr);
     //q=q->next;
  }
