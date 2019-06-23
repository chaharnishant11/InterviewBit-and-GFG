#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    int k=0;
	    bool printed=false;
	    while((1<<k)<=n || (1<<k)<=m){
	        if((m^n)&(1<<k)){
	            cout << k+1 << endl;
	            printed=true;
	            break;
	        }
	        k++;
	    }
	    if(!printed) cout << -1 << endl;
	}
	return 0;
}s
