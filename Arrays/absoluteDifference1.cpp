#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

void print(vector<long long> A){
    int count=0;
    for(int i=0;i<A.size();i++){
          long long c=A[i];
	      if(A[i]>9){
	        while(c>9){
	            if(abs(c%10-(c/10)%10)!=1){
	                break;
	            }
	            c=c/10;
	        }
	        if(c<10){
	            cout<<A[i]<<" ";
	            count++;
	        }
            }
    }
    if(count==0){
        cout << -1 ;
    }
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    long long a[n];
	    vector<long long> ans;
	    for(int i=0;i<n;i++){
	       cin >> a[i];
	       if(a[i]<k){
	           ans.push_back(a[i]);
	       }
	    }
	    print(ans);
	    cout << endl;
	}
	return 0;
}
