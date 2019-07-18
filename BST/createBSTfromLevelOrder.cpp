#include <iostream>
using namespace std;

int count(int a,int b){
    a=a^b;
    int c=0;
    for(int i=0;i<a;i++){
        if(a & (1<<i)){
            c++;
        }
    }
    return c;
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
	    int sum=0;
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            sum+=count(a[i],a[j]);
	        }
	    }
	    cout << 2*sum << endl;
	}
	return 0;
}
