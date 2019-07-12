#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int **a=new int*[n];
	    int z,w;
	    for(int i=0;i<n;i++){
	        a[i]=new int[n];
	        for(int j=0;j<n;j++){
	            cin >> a[i][j];
	            if(a[i][j]==1){
	                z=i,w=j;
	            }
	        }
	    }
        queue<pair<int,int>> q;
        int ans=0;
        int x[4]={1,-1,0,0};
        int y[4]={0,0,1,-1};
        q.push(make_pair(z,w));
        bool found=false;
        while(!q.empty() && !found){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int l=i+x[k];
                int m=j+y[k];
                if(l>=0 && l<n && m>=0 && m<n && a[l][m]!=0){
                    if(a[l][m]==2){
                        ans=1;
                        found=true;
                        break;
                    }if(a[l][m]==3){
                        a[l][m]=0;
                        q.push(make_pair(l,m));
                    }
                }
            }
        }
        cout << ans << endl;
	}
	return 0;
}
