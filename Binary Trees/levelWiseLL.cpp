
vector<node<int>*> createLLForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here

    vector<node<int>*> ans;
    queue<BinaryTreeNode<int>* > q;
    q.push(root);
    q.push(NULL);
    node<int> *h=NULL;
    node<int> *t=NULL;
    while(!q.empty()){
        BinaryTreeNode<int> *front=q.front();
        q.pop();
        if(front!=NULL){
            node<int>* temp=new node<int>(front->data);
            if(h==NULL){
                h=temp;
                t=temp;
            }else{
                t->next=temp;
                t=t->next;
            }
            if(front->left!=NULL)q.push(front->left);
            if(front->right!=NULL)q.push(front->right);
        }if(front==NULL){
            ans.push_back(h);
            h=NULL;
            t=NULL;
            if(q.size()==0) break;
            q.push(NULL);
        }
    }
    return ans;
}
