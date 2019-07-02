/*This is a function problem.You only need to complete the function given below*/
/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
void leftb(Node* root){
    if(root==NULL) return;

    if(root->left!=NULL){
        cout << root->data << " ";
        leftb(root->left);
    }
    else if(root->right!=NULL){
        cout << root->data << " ";
        leftb(root->right);
    }
}

void rightb(Node* root){
    if(root==NULL){
        return;
    }
    if(root->right!=NULL){
        rightb(root->right);
        cout << root->data << " ";
    }
    else if(root->left!=NULL){
        rightb(root->left);
        cout << root->data << " ";
    }
}

void leafnodes(Node* root){
    if(root==NULL){
        return;
    }
    leafnodes(root->left);
    if(root->left==NULL && root->right==NULL){
        cout << root->data << " ";
    }
    leafnodes(root->right);
}

void printBoundary(Node *root)
{
     //Your code here
     cout << root->data << " ";
     leftb(root->left);

     leafnodes(root->left);
     leafnodes(root->right);

     rightb(root->right);
}
