void insert(struct Node **head_ref, int data)
{
	// Code here
	Node *new_node = new Node();
    new_node->data = data;
    new_node->npx = XOR(*head_ref, NULL);

    if (*head_ref != NULL){
        Node* next = XOR((*head_ref)->npx, NULL);
        (*head_ref)->npx = XOR(new_node, next);
    }

    *head_ref = new_node;
}
// function should prints the contents of doubly linked list
// first in forward direction and then in backward direction
// you should print a next line after printing in forward direction
void printList (struct Node *head)
{
	// Code here

    Node *curr = head;
    Node *prev = NULL;
    Node *next;

    while (curr != NULL){
        // print current node
        cout<<curr->data<<" ";
        next = XOR (prev, curr->npx);

        // update prev and curr for next iteration
        if(next==NULL){
            break;
        }
        prev = curr;
        curr = next;
    }
    prev;
    next=NULL;
    cout << endl;
    while(curr!=NULL){
        cout << curr->data << " ";
        prev= XOR(next,curr->npx);

        next=curr;
        curr=prev;
    }
}
