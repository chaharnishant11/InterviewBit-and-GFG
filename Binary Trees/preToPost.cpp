#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

Node* construct(int *preorder,int s,int e){
    if(s>e){
        return NULL;
    }
    int rootData=preorder[s];
    Node* root=new Node(rootData);
    int index=s+1;
    for(int j=s+1;j<=e;j++){
        if(preorder[j]>rootData){
            index=j;
            break;
        }
    }
    root->left=construct(preorder,s+1,index-1);
    root->right=construct(preorder,index,e);
    return root;
}

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
    return;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    Node* root=construct(a,0,n-1);
	    postOrder(root);
	    cout << endl;
	}
	return 0;
}
