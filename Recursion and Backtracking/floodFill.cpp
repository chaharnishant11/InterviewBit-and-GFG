#include <iostream>
using namespace std;
int matrix[100][100];
void flood_fill(int x,int y,int& target,int row,int column,int& num)
{
    if(x<0 || x>row || y<0 || y>column)
    return;
    else if(matrix[x][y]==num)
    return;
    else if(matrix[x][y]!=target)
    return;
    else
    matrix[x][y]=num;
    flood_fill(x+1,y,target,row,column,num);
    flood_fill(x,y+1,target,row,column,num);
    flood_fill(x-1,y,target,row,column,num);
    flood_fill(x,y-1,target,row,column,num);
}
int main()
{
    int t,row,column,x,y,num;
    cin>>t;
    while(t--)
    {
        cin>>row>>column;
        //int mat[row][column];
        for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
        cin>>matrix[i][j];
        cin>>x>>y>>num;
        int target=matrix[x][y];
        flood_fill(x,y,target,row,column,num);
        for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
        cout<<matrix[i][j]<<" ";
        cout<<"\n";
    }
	return 0;
}
