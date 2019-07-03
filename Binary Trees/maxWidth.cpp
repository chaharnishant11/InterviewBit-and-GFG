int getMaxWidth(Node* root{
   // Your Code here
   if (!root)
        return 0;

    queue<Node*> q;
    q.push(root);
    int max=INT_MIN;
    while (!q.empty()) {
        int n = q.size();
        if(n>max){
            max=n;
        }
        for(int i = 1; i <= n; i++)
        {
            Node* temp = q.front();
            q.pop();
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
    return max;
}
