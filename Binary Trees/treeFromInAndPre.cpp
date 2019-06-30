// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/
BinaryTreeNode<int>* helper(int *preorder,int *inorder,int ps,int pe,int is,int ie){
    if(ps>pe){
        return NULL;
    }
    int lios,lioe,lpos,lpoe,rios,rioe,rpos,rpoe;
    int r=preorder[ps];
    int i=-1;
    for(int j=is;j<=ie;j++){
        if(r==inorder[j]){
            i=j;
            break;
        }
    }
    lios=is;
    lioe=i-1;
    lpos=ps+1;
    lpoe=lioe-lios+lpos;
    rios=i+1;
    rioe=ie;
    rpos=lpoe+1;
    rpoe=pe;
    BinaryTreeNode<int>* root= new BinaryTreeNode<int>(r);
    root->left=helper(preorder,inorder,lpos,lpoe,lios,lioe);
    root->right=helper(preorder,inorder,rpos,rpoe,rios,rioe);
    return root;
}


BinaryTreeNode<int>* buildTree(int *preorder, int preLenght, int *inorder, int inLength) {
    // Write your code here

    return helper(preorder,inorder,0,preLenght-1,0,inLength-1);
}
