#include <iostream>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--)
	{
	    long long n,count=0;
	    cin>>n;
	    for(long long i=1;i*i<=n;i++)
        count++;
        cout<<count<<endl;
	}
	return 0;
}
