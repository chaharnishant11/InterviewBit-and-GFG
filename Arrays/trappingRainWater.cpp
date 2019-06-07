#include <iostream>
#include<algorithm>
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
	    int sum=0;
	    int l[n],r[n];
	    l[0]=a[0];
	    r[n-1]=a[n-1];
	    for(int j=n-2;j>=0;j--){
	        r[j]=max(r[j+1],a[j]);
	    }
	    for(int i=1;i<n;i++){
	        l[i]=max(l[i-1],a[i]);
	    }
	    for(int i=0;i<n;i++){
	        int limit = min(l[i],r[i]);
	        sum+=limit-a[i];
	    }
	    cout << sum << endl;
	}
	return 0;
}
