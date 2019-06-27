void SortedStack :: sort()
{
   //Your code here
   stack<int> t;
   while(!s.empty()){
       int temp=s.top();
       s.pop();
       while(!t.empty() && t.top()>temp){
           s.push(t.top());
           t.pop();
       }
       t.push(temp);
   }
   s=t;
}
