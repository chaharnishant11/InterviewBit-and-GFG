
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<TreeNode*> v;
    stack<TreeNode*> s;
    s.push(A);
    while(!s.empty()){
        TreeNode* top=s.top();
        s.pop();
        v.push_back(top);
        if(top->right) s.push(top->right);
        if(top->left) s.push(top->left);
    }
    for(int i=0;i<v.size()-1;i++){
        v[i]->right=v[i+1];
        v[i]->left=NULL;
    }
    return v[0];
}
