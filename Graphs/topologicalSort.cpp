void helper(int n,vector<int> adj[],bool* v,int i,stack<int>* ans){
    v[i]=true;
    vector<int> :: iterator j;
    for(j=adj[i].begin();j!=adj[i].end();++j){
        if(v[*j]) continue;
        helper(n,adj,v,*j,ans);
    }
    ans->push(i);
    return;
}
int* topoSort(int V, vector<int> adj[]){
    // Your code here
    bool *v=new bool[V];
    stack<int>* ans=new stack<int>;
    for(int i=0;i<V;i++){
        if(!v[i]){
            helper(V,adj,v,i,ans);
        }
    }
    int *ret=new int[V];
    int i=0;
    while(i<V){
        ret[i++]=ans->top();
        ans->pop();
    }
    return ret;
}
