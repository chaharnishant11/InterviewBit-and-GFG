#include <iostream>
#include <queue>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++) cin >> a[i];
	    int k;
	    cin >> k;
	    int i=0,j=k-1;
	    int x=n-k+1;
	    while(i<=x){
	        queue<int> q;
	        for(int l=i;l<=j;l++){
	            q.push(a[l]);
	        }
	        bool printed = false;
	        while(!q.empty()){
	            if(q.front()<0){
	                cout << q.front() << " ";
	                printed=true;
	                break;
	            }
	            q.pop();
	        }
	        if(!printed) cout << 0 << " ";
	        i++;
	        j++;
	        if(j==n) break;
	    }
	    cout << endl;
	}
	return 0;
}
