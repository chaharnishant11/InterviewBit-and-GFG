//Reverse a sublist of a linked list
//https://practice.geeksforgeeks.org/problems/reverse-a-sublist-of-a-linked-list/0


/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        Node * prevhead = NULL;
        Node * currenthead = head;
        Node * nexthead = NULL;
        for(int i=0;i<m-1;i++){
            prevhead = currenthead;
            currenthead = currenthead->next;
        }
        nexthead = currenthead->next;
        for(int i=0;i<n-m;i++){
            nexthead = nexthead->next;
        }
     //cout << currenthead->data << " "<< nexthead->data <<endl;
        
        Node* curr = currenthead;
        Node* prev = nexthead;
        Node* next = NULL;
        
        
        for(int i=0;i<n-m+1;i++){
            next = curr->next;
            curr->next = prev;
           // cout << curr->next->data << "!" << endl;
            prev = curr;
            curr = next;
        }
        
        
        if(prevhead!=NULL){
            prevhead->next = prev;
        }
        else{
            prevhead = prev;
            head = prevhead;
        }
        //cout << prevhead->data << endl;
        //cout << head->data << head->next->data ;
        return head;
    }
};