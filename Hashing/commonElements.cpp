#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    ll n1,n2,n3,n;cin>>n1>>n2>>n3;
	    n=n1+n2+n3;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    cin>>a[i];
	    unordered_map<ll,ll>m;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i-1]!=a[i]&& i>0)
	        m[a[i]]++;
	    }
	    int f=0;
	    for(int i=0;i<n1;i++)
	    {
	        if(m[a[i]]>=3 && a[i-1]!=a[i])
	        {
	        cout<<a[i]<<" ";f=1;
	        }
	    }
	    if(f==0)cout<<-1;
	    cout<<endl;
	}
	return 0;
}
