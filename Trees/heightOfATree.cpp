#include <algorithm>
using namespace std;

int height(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int h=1;
    for(int i=0;i<root->children.size();i++){
        h=max(h,height(root->children[i])+1);
    }
    return h;
}
