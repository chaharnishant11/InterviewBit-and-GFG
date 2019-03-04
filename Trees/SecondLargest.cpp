#include <iostream>
using namespace std;
#include <vector>

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
    
};


#include <queue>
#include <climits>

TreeNode<int>* getlargest(TreeNode<int>* root)
{
  if(root==NULL)
        return NULL;
    TreeNode<int>* ans=root;
    for(int i=0;i<root->children.size();i++)
    {
      TreeNode<int>* max=getlargest(root->children[i]);
      if(max->data>ans->data)
        ans=max;
    }
  return ans;
}
TreeNode<int>* helper(TreeNode<int>* root,int k)
{
  TreeNode<int>* ans=NULL;
  if(root->data<k)
    ans=root;
  for(int i=0;i<root->children.size();i++)
  {
    TreeNode<int>* t=helper(root->children[i],k);
    if(t!=NULL)
    {
	if(t->data>ans->data)
      ans=t;
    }
  }
  return ans;
}
TreeNode <int>* secondLargest(TreeNode<int> *root) {
   TreeNode<int>* max=getlargest(root);
  TreeNode<int>* ans=helper(root,max->data);
return ans;
}

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    
    queue<TreeNode<int>*> pendingNodes;
    
    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();
    TreeNode<int>* ans = secondLargest(root);
    if(ans == NULL) {
        cout << INT_MIN << endl;
    }
    else {
        cout << ans -> data << endl;
    }
}
