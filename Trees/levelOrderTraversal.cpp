void levelOrder(Node* node)
{
  //Your code here
    if(node==NULL){
        return;
    }
    queue<Node *> q;
    q.push(node);
    while(1)
    {
         int size = q.size();
         if(size == 0)
            break;
         while(size>0)
         {
             Node *temp = q.front();
             q.pop();
             cout << temp->data << " ";
             if(temp->left)
                q.push(temp->left);
             if(temp->right)
                q.push(temp->right);
             size--;
         }
         cout<<"$ ";
    }

}
