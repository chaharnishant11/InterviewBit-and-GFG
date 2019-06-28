
TreeNode<int>* maxSumNode(TreeNode<int> *root){
    // Write your code here
    int m=root->data;
    TreeNode<int> *ans=root;
    for(int i=0;i<root->numChildren();i++){
        m+=root->getChild(i)->data;
    }
    for(int i=0;i<root->numChildren();i++){
        TreeNode<int>* temp=maxSumNode(root->getChild(i));
        int tempm=temp->data;
        for(int j=0;j<temp->numChildren();j++){
             tempm+=temp->getChild(j)->data;
        }
        if(tempm>m){
            m=tempm;
            ans=temp;
        }
    }
    return ans;

}
