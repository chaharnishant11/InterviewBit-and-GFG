#include <iostream>
#include <climits>
using namespace std;

int find(int *d,bool *v,int n){
    int ans=-1;
    for(int i=0;i<n;i++){
        if(!v[i] && (ans==-1 || d[i]<d[ans])){
            ans=i;
        }
    }
    return ans;
}

void dijkstra(int **edges,int n){
    int *d=new int[n];
    bool *v=new bool[n];
    for(int i=0;i<n;i++){
        v[i]=false;
        d[i]=INT_MAX;
    }
    d[0]=0;
    for(int i=0;i<n-1;i++){
        int m=find(d,v,n);
        v[m]=true;
        for(int j=0;j<n;j++){
            if(edges[m][j]!=0 && !v[j]){
                int dis=d[m]+edges[m][j];
                if(d[j]>dis){
                    d[j]=dis;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << i << " " << d[i] << endl;
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
        int x,y,w;
        cin >> x >> y >> w;
        edges[x][y]=w;
        edges[y][x]=w;
    }
    dijkstra(edges,V);

    return 0;
}
