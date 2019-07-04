#include <bits/stdc++.h>
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
	    int level=1;
	    int max=pow(2,level-1);
	    priority_queue<int,vector<int>,greater<int>> q;
	    for(int i=0;i<n;i++){
	        while(max>0 && i<n){
	            q.push(a[i]);
	            max--;
	            i++;
	        }
	        i--;
	        level++;
	        max=pow(2,level-1);
	        while(!q.empty()){
	            cout << q.top() << " ";
	            q.pop();
	        }
	        cout << endl;
	    }
	}
	return 0;
}
