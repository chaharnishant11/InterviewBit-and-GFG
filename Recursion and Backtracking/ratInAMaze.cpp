void helper(int m[MAX][MAX],int n,int x,int y,vector<string> &ans,string s,int sol[MAX][MAX]){
    if(x<0 || x>=n || y<0 || y>=n || m[x][y]==0 || sol[x][y]==1 ){
        return;
    }
    if(x==n-1 && y==n-1){
        sol[x][y]==1;
        if(s!=""){
            ans.push_back(s);
        }
        return;
    }
    sol[x][y]=1;
    helper(m,n,x+1,y,ans,s+'D',sol);
    helper(m,n,x,y+1,ans,s+'R',sol);
    helper(m,n,x-1,y,ans,s+'U',sol);
    helper(m,n,x,y-1,ans,s+'L',sol);
    sol[x][y]=0;
    return;
}

vector<string> printPath(int m[MAX][MAX], int n)
{
    //Your code here
    vector<string> ans;
    int sol[MAX][MAX];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sol[i][j]=0;
        }
    }
    helper(m,n,0,0,ans,"",sol);
    sort(ans.begin(),ans.end());
    return ans;
}
