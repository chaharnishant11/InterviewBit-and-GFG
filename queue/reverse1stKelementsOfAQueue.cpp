queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    stack<ll> s;
    queue<ll> q2;
    while(k--){
        s.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        q2.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
    }
    return q;
}
