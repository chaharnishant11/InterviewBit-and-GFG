#include<algorithm>
using namespace std;

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int m=root->data;
    TreeNode<int>* mn = root;
    for(int i=0;i<root->children.size();i++){
        TreeNode<int> *temp=maxDataNode(root->children[i]);
        if(m<temp->data){
            m=temp->data;
            mn=temp;
        }
    }
    return mn;

}
