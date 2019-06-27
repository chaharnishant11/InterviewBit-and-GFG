#include <bits/stdc++.h>
using namespace std;

int Search(int A[],int l,int h,int k)
{
	int mid=l+(h-l+1)/2;
	if(l>=h)
		return l;
	if(l<h)
	{
		if(A[mid]>k)
			return Search(A,l,mid-1,k);
		return Search(A,mid,h,k);
	}
}

int main()
{
	bool *prime=new bool[10000000];
	for(int i=0;i<10000000;i++)
		prime[i]=true;
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i*i<10000000;i++)
	{
	    if(prime[i])
        {
            for(int j=2*i;j<10000000;j+=i)
                prime[j]=false;
        }
	}

	int *superPrime=new int[58981];
	int j=0;

	for(int i=2;i<10000000-2;i++)
	{
		if(prime[i] && prime[i+2])
		{
			superPrime[j++]=i+2;
		}
	}
	int N=j;

	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int count=Search(superPrime,0,N-1,n);
		printf("%d\n",count+1);
	}
	return 0;
}
