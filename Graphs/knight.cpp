#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int xst,yst,xen,yen;
        cin>>xst>>yst>>xen>>yen;
        bool vis[n+1][m+1];
        int a[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                vis[i][j]=true;
                a[i][j]=INT_MAX;
            }
        }
        queue<pair<int,int>>q;
        a[xst][yst]=0;
        q.push(make_pair(xst,yst));
        int xinc[]={1,-1,1,-1,2,-2,2,-2};
        int yinc[]={2,2,-2,-2,1,1,-1,-1};

        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<8;i++){
                int xin=x+xinc[i];
                int yin=y+yinc[i];
                if(xin>0&&xin<=n&&yin>0&&yin<=m&&vis[xin][yin]){
                    vis[xin][yin]=false;
                    if(a[xin][yin]>a[x][y]+1){
                    a[xin][yin]=a[x][y]+1;
                        q.push(make_pair(xin,yin));
                    }
                }
                // for(int i=1;i<=n;i++){
                //     for(int j=1;j<=m;j++){
                //         if(a[i][j]==INT_MAX){
                //             cout << -1 << " ";
                //         }else {
                //             cout << " " <<  a[i][j] << " ";
                //         }
                //     }
                //     cout << endl;
                // }
                // cout << endl;
            }

        }

        if(a[xen][yen]==INT_MAX)
        cout<<-1<<endl;
        else
        cout<<a[xen][yen]<<endl;
    }
	//code
	return 0;
}
