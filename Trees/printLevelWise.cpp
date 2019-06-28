#include <queue>
#include <vector>
using namespace std;
void printLevelWise(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */
    queue<TreeNode<int>* > q;
    q.push(root);
    while(q.size()!=0){
        TreeNode<int> * front=q.front();
        q.pop();
        cout << front->data <<  ":" ;
        for(int i=0;i<front->children.size();i++){
            TreeNode<int>* child= front->children[i];
            if(i==front->children.size()-1){
                cout << child->data;
            }else{
                cout << child->data << ",";
            }
            q.push(child);
        }
        cout << endl;
    }

}
