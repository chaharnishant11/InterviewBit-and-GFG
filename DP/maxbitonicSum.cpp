#include <iostream>
using namespace std;

int bitonic(int *a,int n){
    int inc[n];
    int dec[n];
    inc[0]=a[0];
    dec[n-1]=a[n-1];
    for(int i=1;i<n;i++){
        inc[i]=a[i];
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                inc[i]=max(inc[i],inc[j]+a[i]);
            }
        }
    }
    for(int i=n-2;i>=0;i--){
        dec[i]=a[i];
        for(int j=n-1;j>i;j--){
            if(a[i]>a[j]){
                dec[i]=max(dec[i],dec[j]+a[i]);
            }
        }
    }
    int ans=inc[0]+dec[0]-a[0];
    for(int i=1;i<n;i++){
        ans=max(ans,inc[i]+dec[i]-a[i]);
    }
    return ans;
}

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
	    int ans=bitonic(a,n);
	    cout << ans << endl;
	}
	return 0;
}
