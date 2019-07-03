Node<int>* constructBST(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(root==NULL) return NULL;
    Node<int>* right=constructBST(root->right);
    Node<int>* left=constructBST(root->left);
    Node<int>* r=new Node<int>(root->data);
    r->next=right;
    Node<int>* temp=left;
    if(left!=NULL){
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=r;
        return left;
    }

    return r;
}
