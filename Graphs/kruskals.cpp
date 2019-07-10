#include <iostream>
#include <algorithm>
using namespace std;

class edge{
    public:
    int src;
    int dest;
    int w;
    edge(int s,int d,int wi){
        this->src=s;
        this->dest=d;
        this->w=wi;
    }
};

bool compare(edge a,edge b){
    return a.w < b.w;
}

int find(int *parent,int i){
    if(parent[i]==i) return i;
    return find(parent,parent[i]);
}

void Union(int *parent,int x,int y){
    int xset=find(parent,x);
    int yset=find(parent,y);
    if(xset!=yset){
        parent[xset]=yset;
    }
}

int main()
{
    int V, E;
    cin >> V >> E;
    vector<edge> input;
    vector<edge> out;
    for(int i=0;i<E;i++){
        int s,d,w;
        cin >> s >> d >> w;
        edge e(s,d,w);
        input.push_back(e);
    }
    sort(input.begin(),input.end(),compare);
    int count=0;
    int *parent=new int[V];
    for(int i=0;i<V;i++){
        parent[i]=i;
    }
    int i=0;
    while(count<V-1){
        if(find(parent,input[i].src)!=find(parent,input[i].dest)){
            out.push_back(input[i]);
            count++;
        }
        Union(parent,input[i].src,input[i].dest);
        i++;
    }

    for(int i=0;i<V-1;i++){
        if(out[i].src<out[i].dest){
            cout << out[i].src << " " << out[i].dest << " " << out[i].w << endl;
        }else{
            cout << out[i].dest << " " << out[i].src << " " << out[i].w << endl;
        }
    }

    return 0;
}
