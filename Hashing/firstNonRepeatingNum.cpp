#include <iostream>
#include <unordered_map>
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
	    unordered_map<long long,int> m;
	    for(int i=0;i<n;i++){
	        m[a[i]]++;
	    }
	    bool printed=false;
	    for(int i=0;i<n;i++){
	        if(m[a[i]]==1){
	            cout << a[i] << endl;
	            printed=true;
	            break;
	        }
	    }
	    if(!printed){
	        cout << 0 << endl;
	    }
	}
	return 0;
}
