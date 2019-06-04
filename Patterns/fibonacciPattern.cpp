// Take N (number of rows), print the following pattern (for N = 4)
// 0
// 1 1
// 2 3 5
// 8 13 21 34

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i=1;
	int a=0,b=1;
	while(i<=n){
		for(int j=0;j<i;j++){
			cout << a << " ";
			int temp=a;
			a=b;
			b=b+temp;
		}
		cout << endl;
		i++;
	}
	return 0;
}
