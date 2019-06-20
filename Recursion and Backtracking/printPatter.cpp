#include <iostream>
using namespace std;

void printPattern(int n){
    if(n<=0){
        cout << n << " ";
        return;
    }
    cout << n << " ";
    printPattern(n-5);
    cout << n << " ";
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    printPattern(n);
	    cout << endl;
	}
	return 0;
}
