#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t-->0){
	    int n,s;
	    cin >>n >>s;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    bool printed = false;
	    int sum=0,i=0,j=0;
	    while(i<n){
	        if(sum<s){
	            sum+=a[j++];
	        }if(sum>s){
	            sum-=a[i++];
	        }if(sum==s){
	            printed= true;
	            cout << i+1 << " " << j << endl;
	            break;
	        }
	    }
	    if(!printed){
	        cout << -1 << endl;
	    }
	}
	return 0;
}
