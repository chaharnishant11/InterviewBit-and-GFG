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
// BETTER SOLUTION

IsBSTReturn isBST2(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		IsBSTReturn output;
		output.isBST = true;
		output.minimum = INT_MAX;
		output.maximum = INT_MIN;
		return output;
	}
	IsBSTReturn leftOutput = isBST2(root->left);
	IsBSTReturn rightOutput = isBST2(root->right);
	int minimum = min(root->data, min(leftOutput.minimum, rightOutput.minimum));
	int maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));
	bool isBSTFinal = (root->data > leftOutput.maximum) && (root->data <= rightOutput.minimum) &&
		leftOutput.isBST && rightOutput.isBST;
	IsBSTReturn output;
	output.minimum = minimum;
	output.maximum = maximum;
	output.isBST = isBSTFinal;
	return output;
}
