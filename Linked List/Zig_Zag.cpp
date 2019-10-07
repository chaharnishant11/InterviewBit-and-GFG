#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node * ptrtonext;
    Node(int d) {
        data = d;
        ptrtonext = NULL;
    }
};
class Linkedlist {
public:
    Node * createlinkedlist(int numofnodes) {
        Node * head = NULL;
        Node * tail = NULL;
        int ctr = 0;
        while (ctr < numofnodes) {
            int d;
            cin >> d;
            Node * newnode = new Node(d);
            if (ctr == 0) {
                head = newnode;
                tail = newnode;
                ctr++;
            }
            else {
                tail -> ptrtonext = newnode;
                tail = newnode;
                ctr++;
            }
        }
        return head;
    }
    void printlinkedlist(Node * head) {
        Node * curnode = head;
        while (curnode != NULL) {
            cout << curnode -> data << " ";
            curnode = curnode -> ptrtonext;
        }
    }
     void LL_zigzag(Node * head){
        if(head == NULL || head->ptrtonext == NULL)
     {
         return;
     }
        int temp;
        bool flag = true;
        Node*curnode = head->ptrtonext;
        Node*prev = head;
        while(curnode!=NULL){
            if(flag){
                    if(prev->data>curnode->data){
                        temp = curnode->data;
                        curnode -> data = prev ->data;
                        prev-> data = temp;
                    }

            }
            else {
                if(prev->data<curnode->data){
                        temp = curnode->data;
                        curnode -> data = prev ->data;
                        prev-> data = temp;
                }
            }
                    flag = !flag;
                    prev = curnode;
                    curnode = curnode->ptrtonext;
        }
    }
};
int main() {
    int numofnodes;
    cin >> numofnodes;
    Linkedlist L;
    Node * head = L.createlinkedlist(numofnodes);
    L.LL_zigzag(head);
    L.printlinkedlist(head);
}
