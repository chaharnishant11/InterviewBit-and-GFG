#include <iostream>
#include <algorithm>

using namespace std;

int platformsNeeded(int a[], int d[], int n) {


    sort(a, a+n);
    sort(d, d+n);

    int i=1,j=0,p=1;
    int result=1;

    while(i<n && j<n){
        if(a[i]<=d[j]){
            p++;
            i++;
            if(p > result){
                result = p;
            }
        }
        else{
            p--;
            j++;
        }
    }

    return result;

}

int main()
{
	int n;
	cin>>n;
    int* arr=new int[n];
    int* dep=new int[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	for(int i=0;i<n;i++)
    {
    	cin>>dep[i];
	}
    cout<< platformsNeeded(arr, dep, n);
}
