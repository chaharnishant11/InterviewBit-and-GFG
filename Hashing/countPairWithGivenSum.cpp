#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    map<int,int> m;
	    for(int i=0;i<n;i++){
	        m[a[i]]++;
	    }
	    int c=0;
	    for(int i=0;i<n;i++){
	        c+=m[k-a[i]];
	        if(k-a[i]==a[i])
	            c--;
	    }
	    cout << c/2 << endl;
	}
	return 0;
}
