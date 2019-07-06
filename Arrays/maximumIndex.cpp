#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    unsigned long N;
	    cin>>N;
	    unsigned long long *A = new unsigned long long[N];
	    for(unsigned long i=0; i<N; i++)
	    {
	        cin>>A[i];
	    }
	    unsigned long *minAIndex = new unsigned long[N];
	    minAIndex[0] = 0;
	    for(unsigned long i=1; i<N; i++)
	    {
	        minAIndex[i] = A[i] < A[minAIndex[i-1]] ? i : minAIndex[i-1];
	    }
	    unsigned long *maxAIndex = new unsigned long[N];
	    maxAIndex[N-1] = N-1;
	    for(unsigned long i=N-1; i>0; i--)
	    {
	        maxAIndex[i-1] = A[i-1] > A[maxAIndex[i]] ? i-1 : maxAIndex[i];
	    }
	    unsigned long indexDifferenceMax = 0;
	    for(unsigned long i=0, j=0; i<N && j<N;)
	    {
	        if(A[minAIndex[i]] <= A[maxAIndex[j]])
	        {
	            indexDifferenceMax = max(indexDifferenceMax, j-i);
	            j++;
	        }
	        else
	        {
	            i++;
	        }
	    }
	    cout<<indexDifferenceMax<<endl;
	    delete []A;
	    delete []minAIndex;
	    delete []maxAIndex;
	}
	return 0;
}
