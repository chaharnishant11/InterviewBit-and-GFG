void printLevelWise(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int>* front=q.front();
        q.pop();
        cout << front->data << ":";
        if(front->left!=NULL){
            q.push(front->left);
            cout << "L:" << front->left->data;
        }else{
            cout << "L:-1" ;
        }if(front->right!=NULL){
            q.push(front->right);
            cout << ",R:" << front->right->data;
        }else{
            cout << ",R:-1" ;
        }
        cout << endl;
    }
}
