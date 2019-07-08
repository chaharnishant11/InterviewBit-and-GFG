#include <bits/stdc++.h>
using namespace std;

int main() {
    int V, E;
    cin >> V >> E;
    int m[V][V]={{0}};
    for(int i=0;i<E;i++){
        int x,y;
        cin >> x >> y;
        m[x][y]=1;
        m[y][x]=1;
    }
    int v[V]={0};
    queue<int> q;
    q.push(0);
    v[0]=1;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        cout << front << " ";
        for(int i=0;i<V;i++){
            if(i==front) continue;
            if(m[front][i]==1){
                if(v[i]!=1){
                    q.push(i);
                    v[i]=1;
                }
            }
        }
    }

  return 0;
}
