#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long long a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    long long ans[n];
	    stack<long long> s;
	    for(int i=n-1;i>=0;i--){
	        while(!s.empty() && a[i]>=s.top()){
	            s.pop();
	        }
	        ans[i]=s.empty()?-1:s.top();
	        s.push(a[i]);
	    }

	    for(int i=0;i<n;i++){
	        cout << ans[i] << " ";
	    }
	    cout << endl;

	}
	return 0;
}
