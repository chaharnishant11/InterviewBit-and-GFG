#include <iostream>
#include <vector>
using namespace std;

vector<int> haspath(int **edges,int v1,int v2,bool *v,int n){
    if(v1==v2){
        vector<int> ans;
        ans.push_back(v1);
        return ans;
    }
    v[v1]=true;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(edges[v1][i]==1 && v[i]==false){
                ans=haspath(edges,i,v2,v,n);
                if(ans.size()>0){
                    ans.push_back(v1);
                    return ans;
                }else continue;
        }
    }
    return ans;
}

int main()
{
  int V, E, tempX, tempY;
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
        cin >> tempX >> tempY;
        edges[tempX][tempY]=1;
        edges[tempY][tempX]=1;
    }
    cin >> tempX >> tempY;
    bool *v=new bool[V];
    for(int i=0;i<V;i++){
        v[i]=false;
    }
    vector<int> ans=haspath(edges,tempX,tempY,v,V);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;

  return 0;
}
