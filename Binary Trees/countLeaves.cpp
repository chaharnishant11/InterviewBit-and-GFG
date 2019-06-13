int countLeaves(Node* root)
{
  // Your code here
  if(root==NULL){
      return 0;
  }
  if(root->left==NULL && root->right==NULL){
      return 1;
  }
  return countLeaves(root->right)+countLeaves(root->left);
}
s
