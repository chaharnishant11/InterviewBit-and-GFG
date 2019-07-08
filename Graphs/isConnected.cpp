#include <iostream>
#include <queue>
using namespace std;

void printBFS(int **edges,int n,int sv,bool *visited){
  queue<int> q;

  q.push(sv);
  visited[sv]=true;
  while(!q.empty()){
    int curr = q.front();
    q.pop();
    for(int i=0;i<n;i++){
      if(i==curr)
        continue;
      if(edges[curr][i]==1 && !visited[i]){
        q.push(i);
        visited[i]=true;
      }
    }
  }


}
bool connected(int **edges,int sv,int V,bool *visited){
  printBFS(edges,V,sv,visited);
  for(int i=0;i<V;i++){
    if(!visited[i]){
      return false;
    }
  }
  return true;
}

int main() {
    int V, E;
    cin >> V >> E;

  int **edges=new int*[V];
  for(int i=0;i<V;i++){
    edges[i]=new int[V];
    for(int j=0;j<V;j++){
      edges[i][j]=0;
    }
  }

  for(int i=0;i<E;i++){
    int f,s;
    cin >> f >> s;
    edges[f][s]=1;
    edges[s][f]=1;
  }

  bool *visited = new bool[V];
  for(int i=0;i<V;i++){
    visited[i]=false;
  }
  bool ans=connected(edges,0,V,visited);
  if(ans){
    cout << "true";
  }else{
    cout << "false";
  }
  return 0;
}
