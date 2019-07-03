void rightView(Node *root)
{
   // Your Code here
   if (!root)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        for(int i = 1; i <= n; i++)
        {
            Node* temp = q.front();
            q.pop();

            if (i == n)
                cout<<temp->data<<" ";
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
}
