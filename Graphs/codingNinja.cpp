#include <string>
bool helper(char graph[][MAXN],int n,int m,int i,int j,char s[],int **visited){
    if(s[0]=='\0') return true;
    if(i<0 || i>=n || j<0 || j>=m) return false;
    if(visited[i][j]==1) return false;
    if(graph[i][j]==s[0]){
        visited[i][j]=1;
        bool ans1=helper(graph,n,m,i+1,j,s+1,visited);
        bool ans2=helper(graph,n,m,i-1,j,s+1,visited);
        bool ans3=helper(graph,n,m,i,j+1,s+1,visited);
        bool ans4=helper(graph,n,m,i,j-1,s+1,visited);
        bool ans5=helper(graph,n,m,i-1,j-1,s+1,visited);
        bool ans6=helper(graph,n,m,i-1,j+1,s+1,visited);
        bool ans7=helper(graph,n,m,i+1,j-1,s+1,visited);
        bool ans8=helper(graph,n,m,i+1,j+1,s+1,visited);
        visited[i][j]=0;
        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8 ;
    }
    return false;
}


int solve(char Graph[][MAXN],int n, int m)
{
	// Write your code here.
    int **visited=new int*[n];
    for(int i=0;i<n;i++){
        visited[i]=new int[m];
        for(int j=0;j<m;j++){
            visited[i][j]=0;
        }
    }
    bool ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(Graph[i][j]=='C'){
                ans=helper(Graph,n,m,i,j,"CODINGNINJA",visited);
            }
            if(ans==true) return 1;
        }
    }
    return 0;
}
