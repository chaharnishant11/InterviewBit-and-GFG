void dfs(int V,vector<int> adj[],bool *v,int si){

    v[si] = true;
    for(auto i:adj[si])
    {
      if(!v[i])
        dfs(V,adj,v,i);
    }
}
int findMother(int V, vector<int> adj[])
{
    // Your code here
    for(int i=0;i<V;i++){
        bool *v=new bool[V];
        for(int j=0;j<V;j++){
            v[j]=false;
        }
        bool comp=true;
        dfs(V,adj,v,i);
        for(int j=0;j<V;j++){
            if(v[j]==false){
                comp=false;
                break;
            }
        }
        if(comp) return i;
    }
    return -1;
}
