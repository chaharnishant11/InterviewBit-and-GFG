#include <iostream>
#include <stdlib.h>
using namespace std;

int kadane(int arr[], int size){
    int curMax,gMax;
    curMax=arr[0];
    gMax=arr[0];
    for(int i=1;i<size;i++){
        curMax=max(arr[i],curMax+arr[i]);
        gMax=max(curMax,gMax);
    }
    cout<<gMax<<"\n";
    return 0;
}
int main() {
	int t;;
	cin>>t;
	while(t--){
	    int size;
	    cin>>size;
	    int arr[size];
	    for(int i=0;i<size; i++) cin>>arr[i];
	    kadane(arr,size);
	}
	return 0;
}
