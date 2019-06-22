bool search(Node* root, int x)
{
    //Your code here
    if(root==NULL){
        return false;
    }if(root->data==x){
        return true;
    }if(root->data>x){
        return search(root->left,x);
    }if(root->data<x){
        return search(root->right,x);
    }

    return false;
}
