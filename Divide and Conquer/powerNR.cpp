#include <bits/stdc++.h>
using namespace std;
int power(long long int x, long long int y)
{
    long long int temp,b=1000000007;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return ((temp%b)*(temp%b))%b;
    else
        return (x*((temp*temp)%b))%b;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,sum=0;
	    cin>>n;
	    long long int p=n;
	    while(n>0)
	    {
	        long long int rem=n%10;
	        sum=sum*10+rem;
	        n=n/10;
	    }
	   cout<<power(p,sum)<<"\n";
	}
	return 0;
}
