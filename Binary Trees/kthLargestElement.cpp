void find(Node *root,int k,int &count)
{
    if(root!=NULL)
    {
        find(root->right,k,count);
        if(count+1 == k)
            cout << root->key<<"\n";
        count++;
        find(root->left,k,count);
    }
}
void kthLargest(Node *root, int k)
{
    int count=0;
    find(root,k,count);
}
