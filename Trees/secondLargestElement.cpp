
TreeNode<int>* largest(TreeNode<int>* root){
    TreeNode<int>* max=root;
    for(int i=0;i<root->numChildren();i++){
        TreeNode<int>* temp=largest(root->getChild(i));
        if(max->data<temp->data){
            max=temp;
        }
    }
    return max;
}

TreeNode<int>* helper(TreeNode<int>* root,int k){
    TreeNode<int>* ans=NULL;
    if(root->data<k){
        ans=root;
    }
    for(int i=0;i<root->numChildren();i++){
        TreeNode<int>* temp=helper(root->getChild(i),k);
        if(temp!=NULL){
            if( ans!=NULL && temp->data>ans->data){
                ans=temp;
            }else if(ans==NULL){
                ans=temp;
            }
        }
    }
    return ans;
}

TreeNode <int>* secondLargest(TreeNode<int> *root) {
    // Write your code here
    TreeNode<int>* m=largest(root);
    return helper(root,m->data);
}
