#include <bits/stdc++.h>
using namespace std;

bool checkOrder(vector<int> a){
    if(a.size()==0){
        return true;
    }
    for(int i=0;i<a.size()-1;i++){
        if(a[i]>=a[i+1]) return false;
    }
    return true;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> a;
	    for(int i=0;i<n;i++){
	        int x;
	        cin >> x;
	        a.push_back(x);
	    }

	    cout << checkOrder(a) << endl;
	}
	return 0;
}
