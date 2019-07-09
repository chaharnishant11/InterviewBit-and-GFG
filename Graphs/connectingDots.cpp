bool helper(char board[][MAXN],bool visited[][MAXN],char c,int i,int j,int k,int n,int m,int si,int sj){
    if(i<0 || i>=n || j<0 || j>=m) return false;
    if(i==si && j==sj && k<=0) return true;
    if(visited[i][j]) return false;
    if(board[i][j]==c){
        visited[i][j]=1;
        bool ans1=helper(board,visited,c,i+1,j,k-1,n,m,si,sj);
        bool ans2=helper(board,visited,c,i-1,j,k-1,n,m,si,sj);
        bool ans3=helper(board,visited,c,i,j+1,k-1,n,m,si,sj);
        bool ans4=helper(board,visited,c,i,j-1,k-1,n,m,si,sj);
        visited[i][j]=0;
        return ans1 || ans2 || ans3 || ans4;
    }
    return false;
}


int solve(char board[][MAXN],int n, int m)
{
	// Write your code here.
    bool visited[n][MAXN]={{0}};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c=board[i][j];
            bool ans=helper(board,visited,c,i,j,4,n,m,i,j);
            if(ans){
                return 1;
            }
        }
    }
    return 0;
}
