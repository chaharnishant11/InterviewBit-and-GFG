#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t-->0){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    int m=0,r=0;
	    int b[n+1]={0};
	    for(int i=1;i<=n;i++){
	       b[a[i-1]]++;
	    }
	    for(int i=1;i<=n;i++){
	        if(b[i]==0){
	            m=i;
	        }if(b[i]==2){
	            r=i;
	        }
	    }
	    cout << r << " " << m << endl;
	}
	return 0;
}
