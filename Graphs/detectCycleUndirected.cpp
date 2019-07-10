bool cycle(int v,vector<int> adj[],int parent,bool *vis){
    vis[v]=true;
    for(auto j:adj[v]){
        if(!vis[j]){
            if(cycle(j,adj,v,vis)) return true;
        }
        else if(j!=parent) return true;
    }
    return false;
}

bool isCyclic(vector<int> adj[], int V)
{
   // Your code here
   bool *vis=new bool[V];
   for(int i=0;i<V;i++){
       vis[i]=false;
   }
   for(int i=0;i<V;i++){
       if(!vis[i]){
           if(cycle(i,adj,-1,vis)) return true;
       }
   }

   return false;

}
