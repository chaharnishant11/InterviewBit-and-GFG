/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */
// Should set the nextRight for all nodes
void connect(Node *p)
{
   // Your Code Here
   queue<Node*> q;
   q.push(p);
   while(!q.empty()){
       int s=q.size();
       while(s--){
           Node* front=q.front();
           q.pop();
           if(front->left)q.push(front->left);
           if(front->right)q.push(front->right);
           if(s<=0){
               front->nextRight=NULL;
           }else{
               front->nextRight=q.front();
           }

       }
   }
}
