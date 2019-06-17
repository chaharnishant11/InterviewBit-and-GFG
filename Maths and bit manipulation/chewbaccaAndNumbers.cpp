#include<iostream>
using namespace std;
int main() {
	long n;
	cin >> n;
	long num=0;
	long i=1;
	int r=0;
	while(n>0){
		r=n%10;
		if(r>4 && r!=9){
			r=9-r;
		}
		n=n/10;
		if(r==9){
			if(n!=0){
				r=9-r;
			}
		}
		num=i*r+num;
		i=i*10;
	}
	cout << num;
	return 0;
}
