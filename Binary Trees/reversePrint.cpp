void reversePrint(Node *root)
{
    //Your code here
    queue<Node*> q;
    q.push(root);
    stack<int> ans;
    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        ans.push(front->data);
        if(front->right!=NULL){
            q.push(front->right);
        }if(front->left!=NULL){
            q.push(front->left);
        }
    }
    while(!ans.empty()){
        cout << ans.top() << " ";
        ans.pop();
    }
}
