vector<int>* inorder(struct Node* root){
    vector<int> * v=new vector<int>;
    if(root==NULL){
        return v;
    }
    vector<int>* v1=inorder(root->left);
    v1->push_back(root->data);
    vector<int>* v2=inorder(root->right);
    for(int i=0;i<v2->size();i++){
        v1->push_back(v2->at(i));
    }
    return v1;
}

struct Node* find(struct Node* root,int a){
    if(root==NULL){
        return NULL;
    }if(root->data==a){
        return root;
    }
    Node* left=find(root->left,a);
    Node* right=find(root->right,a);
    if(left) return left;
    else return right;
}

struct Node *correctBST( struct Node* root )
{
    // add code here.
    vector<int>* v=inorder(root);
    int a=0,b=0;
    for(int i=0;i<v->size()-1;i++){
        if(v->at(i)>v->at(i+1)){
            if(a==0){
                a=v->at(i);
            }else{
                b=v->at(i);
            }
        }
    }
    struct Node* A=find(root,a);
    struct Node* B=find(root,b);
    A->data=b;
    B->data=a;
    return root;
}
