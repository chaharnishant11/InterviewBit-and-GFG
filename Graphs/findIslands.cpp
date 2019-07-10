void DFS(vector<int> a[],int i,int j,int n,int m){
    if(i<0 || i>=n || j<0 || j>=m ||a[i][j]==0) return;

    a[i][j]=0;
    DFS(a,i+1,j,n,m);
    DFS(a,i-1,j,n,m);
    DFS(a,i,j+1,n,m);
    DFS(a,i,j-1,n,m);
    DFS(a,i+1,j+1,n,m);
    DFS(a,i-1,j-1,n,m);
    DFS(a,i-1,j+1,n,m);
    DFS(a,i+1,j-1,n,m);
}

int findIslands(vector<int> A[], int N, int M)
{
//Your code here
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            {
                if(A[i][j]==1)
                 {
                     DFS(A,i,j,N,M);
                      count++;
                 }
            }
    }
    return count;
}
