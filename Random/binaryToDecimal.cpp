#include<iostream>
#include<math.h>
using namespace std;
int main() {

	int t;
	cin >> t;
	while(t>0){
		int num;
		cin >> num;
		int sum=0;
		int r;
		int i=1;
		while(num>0){
			r=num%10;
			sum=sum+i*r;
			i*=2;
			num=num/10;
		}
		cout << sum << endl;
		t--;
	}
	return 0;
}
