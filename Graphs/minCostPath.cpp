#include <bits/stdc++.h>
using namespace std;


void helper(int **a,int n){
    int **d=new int*[n];
    bool **v=new bool*[n];
    for(int i=0;i<n;i++){
        d[i]=new int[n];
        v[i]=new bool[n];
        for(int j=0;j<n;j++){
            d[i][j]=INT_MAX;
            v[i][j]=false;
        }
    }
    d[0][0]=a[0][0];
    int x[4]={1,-1,0,0};
    int y[4]={0,0,1,-1};
    queue<pair<int,int>> q;
    q.push(make_pair(0,0));
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        int i=p.first;
        int j=p.second;
        for(int k=0;k<4;k++){
            int l=i+x[k];
            int m=j+y[k];
            if(l>=0 && l<n && m>=0 && m<n && (d[i][j]+a[l][m]<d[l][m])){
                d[l][m]=d[i][j]+a[l][m];
                q.push(make_pair(l,m));
            }
        }
    }

    cout << d[n-1][n-1] << endl;

}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int **a=new int*[n];
	    for(int i=0;i<n;i++){
	        a[i]=new int[n];
	        for(int j=0;j<n;j++){
	            cin >> a[i][j];
	        }
	    }
	    helper(a,n);
	}
	return 0;
}
