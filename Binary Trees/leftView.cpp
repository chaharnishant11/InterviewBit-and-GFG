void leftView(Node *root)
{
   // Your code here
   queue<Node* > q;
   q.push(root);
   q.push(NULL);
   vector<int> v;
   v.push_back(root->data);
   while(!q.empty()){
       Node* front=q.front();
       q.pop();
       if(front!=NULL){
           if(front->left) q.push(front->left);
           if(front->right) q.push(front->right);
       }else{
          if(!q.empty()){
               front=q.front();
               v.push_back(front->data);
               q.push(NULL);
          }else{
              break;
          }
       }
   }
   for(int i=0;i<v.size();i++){
       cout << v[i] << " ";
   }
}
