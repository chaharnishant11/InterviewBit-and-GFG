#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    priority_queue<int,vector<int>,greater<int>> q;
	    for(int i=0;i<n;i++){
	        int x;
	        cin >> x;
	        q.push(x);
	    }
	    long ans=0;
	    while(q.size()>1){
	        int temp=q.top();
	        q.pop();
	        temp+=q.top();
	        q.pop();
	        ans+=temp;
	        q.push(temp);
	    }
	    cout << ans << endl;
	}
	return 0;
}
