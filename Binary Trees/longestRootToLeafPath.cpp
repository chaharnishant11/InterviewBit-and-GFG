
vector<int>* longestPath(BinaryTreeNode<int>* root) {
	// Write your code here
    vector<int>* v=new vector<int>;
    if(root==NULL){
        return v;
    }
    vector<int>* v1=longestPath(root->left);
    vector<int>* v2=longestPath(root->right);
    if(v1->size()>v2->size()){
        v1->push_back(root->data);
        return v1;
    }else{
        v2->push_back(root->data);
        return v2;
    }
}
