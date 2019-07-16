int sum(Node* root){
    if(root==NULL) return 0;
    return root->data+sum(root->left)+sum(root->right);
}

void helper(Node* root,int x,int &count){
    if(root==NULL){
        return;
    }
    helper(root->left,x,count);
    helper(root->right,x,count);
    int left=sum(root->left);
    int right=sum(root->right);
    if(left+right+root->data==x) count++;
    return;
}
int countSubtreesWithSumX(Node* root, int x)
{
	if (!root)return 0;
	// Code here
	int count=0;
	helper(root,x,count);
	return count;
}
