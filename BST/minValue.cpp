int minValue(Node* root)
{
    // Code here
    if(root==NULL){
        return -1;
    }
    if(root->left==NULL){
        return root->data;
    }else{
        return minValue(root->left);
    }
}
