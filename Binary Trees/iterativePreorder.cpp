void iterativePreorder(node *root)
{
    // Base Case
    if (root == NULL)
       return;

    stack<node *> nodeStack;
    nodeStack.push(root);

    while (nodeStack.empty() == false)
    {
        struct node *node = nodeStack.top();
        printf ("%d ", node->data);
        nodeStack.pop();
  
        if (node->right)
            nodeStack.push(node->right);
        if (node->left)
            nodeStack.push(node->left);
    }
}
