void MyQueue :: push(int x)
{
        // Your Code
        if(rear==front){
            arr[0]=x;
            front=0;
            rear=1;
        }else{
            arr[rear]=x;
            rear++;
        }
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code
        if(front==rear){
            return -1;
        }else{
            int temp = arr[front];
            front++;
            return temp;
        }
}
