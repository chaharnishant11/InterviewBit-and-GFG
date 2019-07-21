void serialize(Node *root,vector<int> &A)
{
    //Your code here
    if(root==NULL){
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
    return;
}
/*this function deserializes
 the serialized vector A*/

Node * helper(queue<int> &q){
    if(q.empty()) return NULL;
    if(q.front()==-1){
        q.pop();
        return NULL;
    }
    Node* root=newNode(q.front());
    q.pop();
    root->left=helper(q);
    root->right=helper(q);
    return root;

}
Node * deSerialize(vector<int> &A)
{
   //Your code here
   queue<int> q;
   for(int i=0;i<A.size();i++){
       q.push(A[i]);
   }
  return helper(q);
}
