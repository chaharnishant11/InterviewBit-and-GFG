void fillParent(node* parent,node* root, map<node*,node*> &m)
{
  if(!root)
  return;
  m[root] = parent;
  fillParent(root,root->left,m);
  fillParent(root,root->right,m);
}
int printkdistanceNode(node* root, node* start , int k)
{
    map<node*,node*> p;

    fillParent(NULL,root,p);
    int v[101]  ={0};
    queue<node*> q;
    q.push(start);
    node* ptr;
    int count =0;
    while(!q.empty())
    {  int size = q.size();
         while(size>0){
             if(count == k)
             {
                 ptr = q.front();
                 q.pop();
                 cout<<ptr->data<<" ";
             }
             else{
                ptr = q.front();
                q.pop();
                v[ptr->data]=1;
                if(ptr->left && !v[ptr->left->data])
                    q.push(ptr->left);
                if(ptr->right && !v[ptr->right->data])
                    q.push(ptr->right);

                if(p[ptr]!=NULL && !v[p[ptr]->data])
                    q.push(p[ptr]);
             }
            size--;
        }
        count++;
    }

}
