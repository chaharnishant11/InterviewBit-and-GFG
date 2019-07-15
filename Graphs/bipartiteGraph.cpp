bool helper(int G[][MAX],int V,int *color,int src){
     queue<int> q;
     q.push(src);
     color[src]=1;
     while(!q.empty()){
         int front=q.front();
         q.pop();
         for(int i=0;i<V;i++){
             if(G[front][i]==1 && color[i]==-1){
                 if(color[front]==1){
                     color[i]=0;
                 }else{
                     color[i]=1;
                 }
                 q.push(i);
             }
             if(G[front][i]==1 && color[i]==color[front]){
                 return false;
             }
         }
     }
     return true;
}

bool isBipartite(int G[][MAX],int V)
{
     //Your code here
     int color[V];
     for(int i=0;i<V;i++) color[i]=-1;
     bool ans=true;
     for(int i=0;i<V;i++){
         if(color[i]==-1){
             ans=ans&&helper(G,V,color,i);
         }
     }
     return ans;
}
