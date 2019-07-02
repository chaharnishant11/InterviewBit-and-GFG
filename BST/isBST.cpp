#include<bits/stdc++.h>
using namespace std;
int maximum(BinaryTreeNode<int>* root){
    if(root==NULL){
        return INT_MIN;
    }
    int l=maximum(root->left);
    int r=maximum(root->right);
    return max(root->data,max(l,r));
}

int minimum(BinaryTreeNode<int>* root){
    if(root==NULL) return INT_MAX;
    int l=minimum(root->left);
    int r=minimum(root->right);
    return min(root->data,min(l,r));
}

bool isBST(BinaryTreeNode<int> *root){
       /* Don't write main().
	* Don't read input, it is passed as function argument.
	* Return output and don't print it.
	* Taking input and printing output is handled automatically.
	*/
    if(root==NULL) return true;
    bool la=isBST(root->left);
    bool ra=isBST(root->right);
    int lmax=maximum(root->left);
    int rmin=minimum(root->right);

    if(root->data>=lmax && root->data<=rmin){
        return la && ra;
    }else{
        return false;
    }

}
