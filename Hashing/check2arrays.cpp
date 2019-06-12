#include <bits/stdc++.h>
using namespace std;

int check(long a[],long b[],int n){
    map<long,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(m.count(b[i])==0){
            return 0;
        }else{
            m[b[i]]--;
        }
    }
    return 1;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >>n;
	    long a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	    }
	    cout << check(a,b,n) << endl;
	}
	return 0;
}
