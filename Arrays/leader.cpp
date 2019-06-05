#include <iostream>

using namespace std;

void Leaders(int* a,int n)
{
	for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i ;j<n;j++){
            if(a[i]<a[j]){
                leader=false;
                break;
            }
        }
        if(leader){
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];

	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
