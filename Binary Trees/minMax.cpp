#include <climits>
#include <algorithm>
using namespace std;

PairAns minMax(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(root==NULL){
        PairAns a;
        a.min=INT_MAX;
        a.max=INT_MIN;
        return a;
    }
    PairAns ans;
    PairAns la=minMax(root->left);
    PairAns ra=minMax(root->right);
    ans.max=max(la.max,ra.max);
    ans.min=min(la.min,ra.min);
    if(root->data>ans.max){
        ans.max=root->data;
    }if(root->data<ans.min){
        ans.min=root->data;
    }
    return ans;
}
