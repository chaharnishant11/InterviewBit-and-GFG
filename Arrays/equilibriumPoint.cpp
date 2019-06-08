#include <iostream>
using namespace std;

int main() {
	//code
	int t=0;
	cin >> t;
	while(t-->0){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    int l[n]={0};
	    int r[n]={0};
	    int sum=a[0];
	    for(int i=1;i<n;i++){
	        l[i]=sum;
	        sum+=a[i];
	    }
	    sum=a[n-1];
	    for(int i=n-2;i>=0;i--){
	        r[i]=sum;
	        sum+=a[i];
	    }
	    bool printed=false;
	    for(int i=0;i<n;i++){
	        if(l[i]==r[i]){
	            printed = true;
	            cout << i+1 << endl;
	            break;
	        }
	    }

	    if(!printed){
	        cout << -1 << endl;
	    }
	}
	return 0;
}
