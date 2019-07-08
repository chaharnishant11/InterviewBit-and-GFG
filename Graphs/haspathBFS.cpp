#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> getpath(int **edges,int si,int ei,bool *v,int n){

    queue<int> q;
    unordered_map<int,int> m;
    q.push(si);
    v[si]=true;
    bool done=false;
    while(!q.empty() && !done){
        int front=q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(edges[front][i]==1 && !v[i]){
                q.push(i);
                m[i]=front;
                v[i]=true;
                if(i==ei){
                    done=true;
                    break;
                }
            }
        }
    }
    if(!done){
        vector<int> ans;
        return ans;
    }else{
        vector<int> ans;
        int cur=ei;
        ans.push_back(ei);
        while(cur!=si){
            cur=m[cur];
            ans.push_back(cur);
        }
        return ans;
    }
}

int main(){
    int V, E, x, y;
    cin >> V >> E;
    int **edges=new int*[V];
    for(int i=0;i<V;i++){
        edges[i]=new int[V];
        for(int j=0;j<V;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<E;i++){
        cin >> x >> y;
        edges[x][y]=1;
        edges[y][x]=1;
    }
    cin >> x >> y;
    bool *v = new bool[V];
    for(int i=0;i<V;i++){
        v[i]=false;
    }

    vector<int> ans=getpath(edges,x,y,v,V);

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
