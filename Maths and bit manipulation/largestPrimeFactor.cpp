#include <iostream>
using namespace std;

void print(long int n){
    int i;
    long int max=-1;
    while(n%2==0){
        max=2;
        n/=2;
    }
    for(i=3;i*i<n;i++){
        while(n%i==0){
            max=i;
            n/=i;
        }
    }
    if(n>2) max=n;

    cout << max << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n;
	    cin >> n;
	    print(n);
	}
	return 0;
}
