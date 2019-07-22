void merge(Node *root1, Node *root2)
{
   //Your code here
    stack<Node*> s1, s2;
    Node *c1 = root1, *c2 = root2;

    while(c1) s1.push(c1), c1 = c1->left;
    while(c2) s2.push(c2), c2 = c2->left;

    while(not (s1.empty() and s2.empty())){
        c1 = c2 = NULL;

        if(not s1.empty()) c1 = s1.top();
        if(not s2.empty()) c2 = s2.top();

        if(c1 == NULL){
            cout << c2->data << " ";
            s2.pop();
        }
        else if(c2 == NULL){
            cout << c1->data << " ";
            s1.pop();
        }
        else if(c1->data < c2->data){
            cout << c1->data << " ";
            s1.pop();
            c2 = NULL;
        }
        else {
            cout << c2->data << " ";
            s2.pop();
            c1 = NULL;
        }
        if(c1 and c1->right){
            c1 = c1->right;
            while(c1) s1.push(c1), c1 = c1->left;
        }
        if(c2 and c2->right){
            c2 = c2->right;
            while(c2) s2.push(c2), c2 = c2->left;
        }
    }
}
