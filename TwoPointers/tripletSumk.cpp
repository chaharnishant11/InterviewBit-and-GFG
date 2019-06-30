#include <iostream>
#include <algorithm>
using namespace std;

int triplet(int *a,int n,int k){
    for(int i=0;i<n;i++){
        int rem=k-a[i];
        int s=i+1,e=n-1;
        while(s<e){
            if(a[s]+a[e]==rem){
                return 1;
            }if(a[s]+a[e]>rem){
                e--;
            }else if(a[s]+a[e]<rem){
                s++;
            }
        }
    }
    return 0;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    sort(a,a+n);
	    cout << triplet(a,n,k) << endl;
	}
	return 0;
}
