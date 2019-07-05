void diagonalPrint(Node *root)
{
   // your code here
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node *t=q.front();
        while(t){
            cout<<t->data<<" ";
            if(t->left)
                q.push(t->left);
            t=t->right;
        }
        q.pop();
    }
}
