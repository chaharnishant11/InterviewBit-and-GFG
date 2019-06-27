#include <iostream>
using namespace std;

long gcd(long a,long b){
    if(a==0) return b;
    return gcd(b%a,a);
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    long a,b;
	    cin >> a >> b;
	    long c;
	    if(b>a){
	        c=gcd(a,b);
	    }else{
	        c=gcd(b,a);
	    }

	    cout << (a*b)/c << " " << c << endl;
	}
	return 0;
}
