int level(Node* root, Node* ptr, int lev){
    if (!root) return 0;
    if (root->data == ptr->data) return lev;
    int l = level(root->left, ptr, lev+1);
    if (l) return l;
    return level(root->right, ptr, lev+1);
}

bool sibling(Node* root, int a,int b){
    if (!root)
        return false;
    if (root->left && root->right) {
        int left = root->left->data;
        int right = root->right->data;

        if (left == a && right == b)
            return true;
        else if (left == b && right == a)
            return true;
    }
    if (root->left)
        sibling(root->left,a,b);
    if (root->right)
        sibling(root->right,a,b);
}

bool ifCousin(Node *root,Node *a,Node *b)
{
   //add code here.
   int al=level(root,a,0);
   int bl=level(root,b,0);
   if(al==-1 || bl==-1){
       return false;
   }if(al==bl && !sibling(root,a->data,b->data) ) return true;
   return false;
}
