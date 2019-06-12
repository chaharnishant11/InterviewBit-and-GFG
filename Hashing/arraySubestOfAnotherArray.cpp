#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t-->0){
	    int n,m;
	    cin >> n >> m;
	    int a[n],b[m];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<m;i++){
	        cin >> b[i];
	    }
	    unordered_set<int> s;
	    for(int i=0;i<n;i++){
	        s.insert(a[i]);
	    }
	    bool printed =false;
	    for(int i=0;i<m;i++){
	        if(s.find(b[i])==s.end()){
	            cout << "No" << endl;
	            printed = true;
	            break;
	        }
	    }
	    if(!printed){
	        cout << "Yes" << endl;
	    }
	}
	return 0;
}
