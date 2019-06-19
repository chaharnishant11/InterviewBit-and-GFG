void MyQueue:: push(int x)
{
        // Your Code
        if(front==NULL){
            QueueNode *temp = new QueueNode(x);
            front=temp;
            rear=temp;
        }else{
            QueueNode *temp = new QueueNode(x);
            rear->next=temp;
            rear=rear->next;
        }
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code
        if(front==NULL){
            return -1;
        }else{
            int temp=front->data;
            front=front->next;
            return temp;
        }
}
