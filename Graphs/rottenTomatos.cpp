#include<bits/stdc++.h>
using namespace std;

bool is_inside(int r,int c,int i,int j){
    return (i<r && i>=0 && j<c && j>=0);
}

int main(){
	int t;
	cin >> t;
	while(t--){
	    int r,c;
	    cin >> r >> c;
	    int arr[101][101];
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++)
	            cin >> arr[i][j];
	    }
	    queue<pair<int,int> >q;
	    int total=0;
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            if(arr[i][j]==1 || arr[i][j]==2)
	                ++total;
	            if(arr[i][j]==2)
	                q.push(make_pair(i,j));
	        }
	    }
	    int cnt=0;
	    int tm=0;
	    while(!q.empty()){
	        cnt+=q.size();
	        int s=q.size();
	        while(s--){
	            pair<int,int>x=q.front();
	            q.pop();
	            int row=x.first;
	            int col=x.second;
	            if(is_inside(r,c,row+1,col) && arr[row+1][col]==1){
	                arr[row+1][col]=2;
	                q.push(make_pair(row+1,col));
	            }
	            if(is_inside(r,c,row-1,col) && arr[row-1][col]==1){
	                arr[row-1][col]=2;
	                q.push(make_pair(row-1,col));
	            }
	            if(is_inside(r,c,row,col+1) && arr[row][col+1]==1){
	                arr[row][col+1]=2;
	                q.push(make_pair(row,col+1));
	            }
	            if(is_inside(r,c,row,col-1) && arr[row][col-1]==1){
	                arr[row][col-1]=2;
	                q.push(make_pair(row,col-1));
	            }
	        }
	        ++tm;
	    }
	    if(cnt==total)
	        cout << tm-1 << endl;
	    else
	        cout << "-1\n";
	}
	return 0;
}
