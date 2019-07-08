#include <queue>
using namespace std;
void bfs(int **edges,int si,bool *visited,int n){
    queue<int> q;
    q.push(si);
    while(!q.empty()){
        int front=q.front();
        q.pop();
        visited[front]=true;
        for(int i=1;i<=n;i++){
            if(edges[front][i]==1 && !visited[i]){
                q.push(i);
            }
        }
    }
    return;
}


int solve(int n,int m,vector<int>u,vector<int>v)
{
	// Write your code here .
    bool *visited=new bool[n+1];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    int **edges=new int*[n+1];
    for(int i=0;i<=n;i++){
        edges[i]=new int[n+1];
        for(int j=0;j<=n;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        edges[u[i]][v[i]]=1;
        edges[v[i]][u[i]]=1;
    }
    int c=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            c++;
            bfs(edges,i,visited,n);
        }
    }
    return c;
}
