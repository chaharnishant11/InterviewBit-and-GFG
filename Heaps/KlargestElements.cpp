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
	    for(int i=0;i<k;i++){
	        cout << q.top() << " ";
	        q.pop();
	    }
	    cout << endl;
	}
	return 0;
}
