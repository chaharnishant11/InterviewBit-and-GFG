int isSumProperty(Node *node)
{
 // Add your code here]
    if(node==NULL)
        return 1;
    if(node->left==NULL && node->right==NULL) return 1;
    int sum=0;
    if(node->left!=NULL){
        sum+=node->left->data;
    }if(node->right!=NULL){
        sum+=node->right->data;
    }
    if(sum==node->data){
        return isSumProperty(node->left) && isSumProperty(node->right);
    }else{
        return 0;
    }
}
