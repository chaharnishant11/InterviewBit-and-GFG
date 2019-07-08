#include <iostream>
using namespace std;
bool haspath(int **edges,int v1,int v2,int V,bool *visited){
  if(v1==v2){
    return true;
  }
  visited[v1]=true;
  for(int i=0;i<V;i++){
    if(edges[v1][i]==1 && !visited[i]){
      bool ans=haspath(edges,i,v2,V,visited);
      visited[i]=true;
      if(ans==true) return true;
    }
  }
  return false;
}
int main() {
    int V, E;
    cin >> V >> E;

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to take input and print the output yourself

  */
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
  int v1,v2;
  cin >> v1 >> v2;

  bool *visited = new bool[V];
  for(int i=0;i<V;i++){
    visited[i]=false;
  }
  bool ans=haspath(edges,v1,v2,V,visited);
  if(ans){
    cout << "true";
  }else{
    cout << "false";
  }
  return 0;
}
