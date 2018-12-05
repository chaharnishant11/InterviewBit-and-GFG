#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

vector<int> getpath(int **edges,int v1,int v2,int V,bool *visited){
  /*if(v1==v2){
    vector<int> v;
    v.push_back(v1);
    return v;
  }*/
  queue<int> q;
  unordered_map<int,int> m;
  q.push(sv);
  vector<int> x;
  visited[v1] = true;
  while(!q.empty()){
    int curr = q.front();
    q.pop();
    for(int i=0;i<n;i++){
      if(i==v2)
        
      if(edges[curr][i]==1 && !visited[i]){
        m[curr]=i;
        q.push(i);
        visited[i]=true;
      }
    }
  }
  
  return x;
}
/*void printBFS(int **edges,int n,int sv,bool *visited){
  queue<int> q;
  
  q.push(sv);
  visited[sv]=true;
  while(!q.empty()){
    int curr = q.front();
    q.pop();
    cout << curr << " ";
    for(int i=0;i<n;i++){
      if(i==curr)
        continue;
      if(edges[curr][i]==1 && !visited[i]){
        q.push(i);
        visited[i]=true;
      }
    }
  }
  
  
}*/
int main()
{
  int V, E;
  cin >> V >> E;

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to Print the output yourself
	 
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
  
  vector<int> ans=getpath(edges,v1,v2,V,visited);
  for(int i=0;i<ans.size();i++){
    cout << ans.at(i) << " " ;
  }
  
  return 0;
}
