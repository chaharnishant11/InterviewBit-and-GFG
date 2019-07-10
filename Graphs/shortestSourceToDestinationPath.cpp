#include<bits/stdc++.h>
using namespace std;
int n,m;
void s_to_d(int s_x,int s_y, int d_x,int d_y,int steps,int *min_step,int mat[30][30] )
{
	if(s_x<0 || s_x >=n || s_y<0 || s_y >=m )
    return;
    else if(mat[s_x][s_y]==0)
    return;
    else
    if(s_x==d_x && s_y ==d_y)
    {
        if(*min_step>steps)
        {
            *min_step=steps;
        }
        return;
    }
    mat[s_x][s_y]=0;
    s_to_d(s_x-1,s_y,d_x,d_y,steps+1,min_step,mat);
    s_to_d(s_x+1,s_y,d_x,d_y,steps+1,min_step,mat);
    s_to_d(s_x,s_y-1,d_x,d_y,steps+1,min_step,mat);
    s_to_d(s_x,s_y+1,d_x,d_y,steps+1,min_step,mat);
    mat[s_x][s_y]=1;
    return;
}
int main()
 {
	int t,d_x,d_y;
	int mat [30][30];
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>mat[i][j];
	        }
	    }
	    cin>>d_x>>d_y;
	    int steps=0,min_step;
	    min_step=10000;
	    s_to_d(0,0,d_x,d_y,steps,&min_step,mat);
	    if(min_step==10000)
	    cout<<"-1\n";
	    else
	    cout<<min_step<<"\n";
	}
	return 0;
}
