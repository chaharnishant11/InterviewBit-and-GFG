#include <iostream>
#include <unordered_map>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    sort(a,a+n);
	    unordered_map<string,int> m;
	    for(int i=0;i<n;i++){
	        m[a[i]]++;
	    }
	    int max=INT_MIN;
	    string name="";
	    for(int i=0;i<n;i++){
	        if(m[a[i]]>max){
	            max=m[a[i]];
	            name=a[i];
	        }
	    }
	    cout << name  << " " << max << endl;
	}
	return 0;
}
