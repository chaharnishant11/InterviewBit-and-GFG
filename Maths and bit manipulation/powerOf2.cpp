#include <iostream>
using namespace std;

bool power(long long n){
    if(n==0){
        return false;
    }
    if(n==1){
        return true;
    }
    if(n%2!=0){
        return false;
    }
    return power(n/2);
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    long long n;
	    cin >> n;
	    if(power(n)==0){
	        cout << "NO" << endl;
	    }else{
	        cout << "YES" << endl;
	    }
	}
	return 0;
}
