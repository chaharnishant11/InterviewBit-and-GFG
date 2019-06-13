#include<iostream>
#include<map>
using namespace std;
int main()
 {
	//code
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n] = {0};
	    int temp;
	    for(int i=0;i<n;i++){
	        cin>>temp;
	        arr[temp-1]++;
	    }
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
