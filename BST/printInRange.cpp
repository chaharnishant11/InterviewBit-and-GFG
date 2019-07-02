void printNearNodes(Node *root, int l, int h)
{
  // your code goes here
  if(root==NULL) return;
  if(root->data>l) printNearNodes(root->left,l,h);
  if(root->data>=l && root->data<=h) cout << root->data << " ";
  if(root->data<h) printNearNodes(root->right,l,h);
}
