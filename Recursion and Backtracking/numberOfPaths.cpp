#include <iostream>
using namespace std;

int count(int i,int j,int n,int m){
    if(i==n && j==m){
        return 1;
    }
    int ans=0;
    if(i<n){
        ans+=count(i+1,j,n,m);
    }if(j<m){
        ans+=count(i,j+1,n,m);
    }
    return ans;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    cout << count(1,1,n,m) << endl;
	}
	return 0;
}
