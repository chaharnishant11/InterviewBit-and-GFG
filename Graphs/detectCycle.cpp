bool isCyclicUtil(int v, vector<int> adj[],bool *vis,bool *rec){
    if(vis[v] == false){
        vis[v] =true;
        rec[v] = true;
        for(auto j:adj[v]){
            if(!vis[j] && isCyclicUtil(j,adj,vis,rec))
                return true;
            else if(rec[j])
                return true;
        }
    }
    rec[v] = false;
    return false;
}


bool isCyclic(int V, vector<int> adj[]){
    bool *vis = new bool[V];
    bool *rec = new bool[V];

    for(int i=0;i<V;i++){
        vis[i] = false;
        rec[i] = false;

    }

    for(int i=0;i<V;i++){
        if(isCyclicUtil(i,adj,vis,rec))
            return true;
    }

    return false;


}
