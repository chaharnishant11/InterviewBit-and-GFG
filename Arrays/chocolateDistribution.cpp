#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    int m;
	    cin >> m;
	    int i=0,j=m-1;
	    int M=INT_MAX;
	    sort(a,a+n);
	    while(j<n){
	        int d=a[j]-a[i];
	        M=min(M,d);
	        i++,j++;
	    }
	    cout << M << endl;
	}
	return 0;
}
