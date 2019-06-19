void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
}
/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code

        if(q1.empty()){
            return -1;
        }
        else{

            // Transfer from q1 to q2 till only 1 element left
            while(q1.size()!=1){
                int ele=q1.front();
                q1.pop();
                q2.push(ele);
            }
            // Last element left is to be popped
            int elementDeleted=q1.front();
            q1.pop();

            // Swap q1 and q2
            swap(q1,q2);

            return elementDeleted;

        }
}
