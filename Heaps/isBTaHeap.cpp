
bool isHeap(Node * root)
{
 // Your code here
    if(!root) return true;
    if(!root->left && !root->right) return true;
    if((root->left && root->left->data>=root->data) || (root->right && root->right->data>root->data)) return false;
    return isHeap(root->left) && isHeap(root->right);
}
