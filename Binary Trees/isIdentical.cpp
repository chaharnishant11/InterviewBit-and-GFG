bool isIdentical(Node *r1, Node *r2)
{
    //Your Code here
    if(r1==NULL || r2==NULL){
        if(r1==NULL && r2!=NULL){
            return false;
        }else if(r1!=NULL && r2==NULL){
            return false;
        }
        return true;
    }
    if(r1->data!=r2->data){
        return false;
    }
    return isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right);
}
