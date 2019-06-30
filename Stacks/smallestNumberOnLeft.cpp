#include <iostream>
#include <stack>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    stack<int> s;
	    s.push(a[0]);
	    cout << -1 << " ";
	    for(int i=1;i<n;i++){
	        while(!s.empty() && s.top()>=a[i]){
	            s.pop();
	        }
	        if(s.empty()){
	            cout << -1 << " ";
	        }else{
	            cout << s.top() << " ";
	        }
	        s.push(a[i]);
	    }
	    cout << endl;
	}
	return 0;
}
