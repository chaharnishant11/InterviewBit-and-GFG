int DFS(int i, int j, int n, int m, int g[SIZE][SIZE], bool vis[SIZE][SIZE]){
    int X[]={0,1,1,1,0,-1,-1,-1};
    int Y[]={1,1,0,-1,-1,-1,0,1};
    queue<pair<int,int> >Q;
    Q.push({i,j});
    vis[i][j]=1;
    int cnt = 1;
    while(!Q.empty()){
        pair<int,int> f = Q.front();
        Q.pop();
        for(int i=0; i<8; i++){
            int newx = f.first + X[i];
            int newy = f.second + Y[i];
            if(newx>=0 && newy>=0 && newx<n && newy<m &&
            g[newx][newy]==1 && vis[newx][newy]==0){
                cnt++;
                Q.push({newx,newy});
                vis[newx][newy] = 1;
            }
        }
    }
    return cnt;
}
int findAreaUtil(int n, int m, int g[SIZE][SIZE], bool vis[SIZE][SIZE]){
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(g[i][j]==1 && vis[i][j]!=1){
                int curr = DFS(i,j,n,m,g,vis);
                ans = max(ans,curr);
            }
        }
    }
    return ans;
}
