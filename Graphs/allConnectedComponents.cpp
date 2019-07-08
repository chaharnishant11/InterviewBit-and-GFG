#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> bfs(int **edges,int si,bool *v,int n){
    queue<int> q;
    vector<int> ans;
    q.push(si);
    v[si]=true;
    ans.push_back(si);
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(edges[front][i]==1 && !v[i]){
                q.push(i);
                ans.push_back(i);
                v[i]=true;
            }
        }
    }
    return ans;
}

void print(int **edges,int si,bool *v,int n){
    vector<int> temp;
    vector<vector<int>> ans;
    temp=bfs(edges,si,v,n);
    sort(temp.begin(),temp.end());
    ans.push_back(temp);
    temp.clear();
    for(int i=0;i<n;i++){
        if(!v[i]){
            temp=bfs(edges,i,v,n);
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int V, E, tempX, tempY;
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
    print(edges,0,visited,V);

    return 0;
}
