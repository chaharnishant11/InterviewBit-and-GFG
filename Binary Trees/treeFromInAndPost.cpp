BinaryTreeNode<int>* helper(int *postorder,int *inorder,int ps,int pe,int is, int ie){
    if(is>ie){
        return NULL;
    }
    int rootData=postorder[pe];
    int index=-1;
    for(int i=is;i<=ie;i++){
        if(rootData==inorder[i]){
            index=i;
            break;
        }
    }
    int lios,lioe,lpos,lpoe,rios,rioe,rpos,rpoe;
    lios=is;
    lioe=index-1;
    lpos=ps;
    lpoe=lioe-lios+lpos;
    rios=index+1;
    rioe=ie;
    rpos=lpoe+1;
    rpoe=pe-1;
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    root->left=helper(postorder,inorder,lpos,lpoe,lios,lioe);
    root->right=helper(postorder,inorder,rpos,rpoe,rios,rioe);
    return root;
}


BinaryTreeNode<int>* getTreeFromPostorderAndInorder(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
    return helper(postorder,inorder,0,postLength-1,0,inLength-1);
}
