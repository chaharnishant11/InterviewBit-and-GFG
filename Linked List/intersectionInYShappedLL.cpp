//Method 1

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *h1=head1;
    Node *h2=head2;
    while(h1!=NULL){
        h2=head2;
        while(h2!=NULL){
            if(h1==h2){
                return h1->data;
            }
            h2=h2->next;
        }
        h1=h1->next;
    }
    return -1;
}

//Method 2

int lengthLL(Node *head){
    int c=0;
    while(head!=NULL){
        c++;
        head=head->next;
    }
    return c;
}
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *h1=head1;
    Node *h2=head2;
    int n1=lengthLL(h1);
    int n2=lengthLL(h2);
    int d=0;
    if(n1>n2){
        d=n1-n2;
        while(d-->0){
            h1=h1->next;
        }
    }else{
        d=n2-n1;
        while(d-->0){
            h2=h2->next;
        }
    }
    while(h1!=NULL && h2!=NULL){
        if(h1==h2){
            return h1->data;
        }
        h1=h1->next;
        h2=h2->next;
    }
    return -1;
}
