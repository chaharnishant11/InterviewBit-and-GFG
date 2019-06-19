void StackQueue :: push(int x)
 {
        // Your Code
        s1.push(x);
 }
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        // Your Code
        if(s1.empty()){
            return -1;
        }else{
            while(s1.size()!=1){
                int t=s1.top();
                s1.pop();
                s2.push(t);
            }
            int r=s1.top();
            s1.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            return r;
        }
}
