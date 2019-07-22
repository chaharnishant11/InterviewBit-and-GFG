bool isSubtree(Node* t1, Node* t2) {
    // Your code here
    // return 1 if T2 is subtree of T1 else 0
    bool c=false;
    if(t1!=NULL && t2!=NULL){
        if(t1->data!=t2->data){
            c=isSubtree(t1->left,t2);
            if(c==false){
                c=isSubtree(t1->right,t2);
            }
        }else if(t1->data==t2->data){
            c=true;
            c=isSubtree(t1->left,t2->left);
            if(c==true){
                c=isSubtree(t1->right,t2->right);
            }
        }
    }
    else if(t1==NULL && t2==NULL){
        c=true;
    }
    return c;
}
