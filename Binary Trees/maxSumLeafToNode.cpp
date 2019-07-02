int helper(Node* root, int &res){
    if (root == NULL)
        return 0;

    int l = helper(root->left,res);
    int r = helper(root->right,res);

    int max_single = max(max(l, r) + root->data, root->data);

    int max_top = max(max_single, l + r + root->data);

    res = max(res, max_top);
    return max_single;
}
int maxPathSum(struct Node *root)
{
    int res=INT_MIN;
    helper(root,res);
    return res;
}
