#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(int n){

    while(n>0){
        int r=n%10;
        if(r==1 || r==2 || r==3){
            n/=10;
            continue;
        }else{
            return false;
        }
        n/=10;
    }
    return true;
}

int main() {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    bool printed=false;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        if(check(a[i])){
	            v.push_back(a[i]);
	        }
	    }
	    sort(v.begin(),v.end());
	    if(v.size()==0) cout << -1;
	    else{
	        for(int i=0;i<v.size();i++){
	            cout << v[i] << " ";
	        }
	    }
	    cout << "\n";
	}
	return 0;
}
