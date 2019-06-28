
void helper(TreeNode<int> *root,int depth){
    root->data=depth;
    for(int i=0;i<root->numChildren();i++){
        helper(root->getChild(i),depth+1);
    }
}

void replaceWithDepthValue(TreeNode<int> *root){
	// Write your code here
    helper(root,0);
}
