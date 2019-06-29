#include <bits/stdc++.h>
using namespace std;

int main() {
	//code'
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
	    int first=0,second=0;
	    while(!q.empty()){
	        first=first*10+q.top();
	        q.pop();
	        if(!q.empty()){
	            second=second*10+q.top();
	            q.pop();
	        }
	    }
	    cout << first+second << endl;
	}
	return 0;
}
