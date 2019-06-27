stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{
    //Your code here
    int c;
    if(sizeOfStack%2==0){
        c=(sizeOfStack/2);
    }else{
        c=sizeOfStack/2;
    }
    stack<int> t;
    while(!s.empty()){
        if(c==0){
            s.pop();
            c--;
            continue;
        }
        t.push(s.top());
        s.pop();
        c--;
    }
    while(!t.empty()){
        s.push(t.top());
        t.pop();
    }
    return s;
}
