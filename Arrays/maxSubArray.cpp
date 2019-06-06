#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t-->0){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    int start=0,s=0,max=0,m=0;
	    for(int i=0;i<n;i++){
	        if(a[i]<0){
	            if(m>=max){
	                max=m;
	                start=s;
	            }
	            if(i!=n-1){
	                s=i+1;
	            }
	            m=0;
	        }else{
	            m=m+a[i];
	        }
	    }
	    if(m>max){
	        max=m;
	        start=s;
	    }
	    int i=start;
	    while(a[i]>=0 && i<n ){
	        cout << a[i++] << " " ;
	    }
	    cout << endl;
	}
	return 0;
}
