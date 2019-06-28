TreeNode<int>* nextLargerElement(TreeNode<int> *root, int n) {
    // Write your code here
    TreeNode<int>* ans=NULL;
    if(root->data > n){
        ans=root;
    }
    for(int i=0;i<root->numChildren();i++){
        TreeNode<int> *temp=nextLargerElement(root->getChild(i),n);
        if(ans==NULL && temp!=NULL){
            ans=temp;
        }
        else if(ans!=NULL && temp!=NULL && ans->data>temp->data ){
            ans=temp;
        }
    }
    return ans;
}
