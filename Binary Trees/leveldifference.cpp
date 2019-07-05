int getLevelDiff(Node *root)
{
   //Your code here
   int odd=0;
   int even=0;
   queue<Node*> q;
   q.push(root);
   bool flag=false;
   while(!q.empty()){
       int n=q.size();
       for(int i=0;i<n;i++){
           Node* front = q.front();
           q.pop();
           if(flag){
               even+=front->data;
           }else{
               odd+=front->data;
           }
           if(front->left) q.push(front->left);
           if(front->right) q.push(front->right);
       }
       if(flag) flag=false;
       else flag=true;
   }
   return odd-even;
}
