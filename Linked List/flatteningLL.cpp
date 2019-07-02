/*This is a function problem.You only need to complete the function given below*/
/* Node structure  used in the program
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
}; */
/*  Function which returns the  root of
    the flattened linked list. */

Node *merge(Node *h1,Node *h2){
    if(h1==NULL){
        return h2;
    }
    if(h2==NULL){
        return h1;
    }
    Node *result;
    if(h1->data<h2->data){
        result=h1;
        result->bottom = merge(h1->bottom,h2);
    }else{
        result=h2;
        result->bottom = merge(h1,h2->bottom);
    }
    return result;
}

Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL || root->next==NULL){
       return root;
   }

   return merge(root,flatten(root->next));


}
