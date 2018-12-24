#include <iostream>
#include <vector>
using namespace std;

vector<int> getpath(int **edges,int v1,int v2,int V,bool *visited){
  if(v1==v2){
    vector<int> v;
    v.push_back(v1);
    return v;
  }
  vector<int> x;
  visited[v1] = true;
  for(int i=0;i<V;i++)
  {
    if(edges[v1][i]==1 && !visited[i])
    {
      x=getpath(edges,i,v2,V,visited);
      if(!x.empty())
      {
        x.push_back(v1);
        return x;
      }
      if(x.size()==0){
        continue;
      }
    }
  }
  return x;
}

int main()
{
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
