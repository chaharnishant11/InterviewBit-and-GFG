int height(Node *root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL){
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return isBalanced(root->left) && isBalanced(root->right);
    }else{
        return false;
    }

}
