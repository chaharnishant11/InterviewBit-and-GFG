#include <iostream>
#include <algorithm>
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
	    sort(a,a+n);
	    if(n%2==0){
	        for(int i=n-2;i>=0;i-=2){
	            cout << a[i] << " ";
	        }
	        for(int i=1;i<n;i+=2){
	            cout << a[i] << " ";
	        }
	    }else{
	        for(int i=n-1;i>=0;i-=2){
	            cout << a[i] << " ";
	        }
	        for(int i=1;i<n;i+=2){
	            cout << a[i] << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}
