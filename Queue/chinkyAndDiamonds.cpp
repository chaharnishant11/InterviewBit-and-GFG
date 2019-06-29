#include <iostream>
#include <queue>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    priority_queue<int> q;
	    for(int i=0;i<n;i++){
	        int x;
	        cin >> x;
	        q.push(x);
	    }
	    int ans=0;
	    while(k--){
	        int top=q.top();
	        q.pop();
	        ans+=top;
	        top=top/2;
	        q.push(top);
	    }
	    cout << ans << endl;

	}
	return 0;
}
