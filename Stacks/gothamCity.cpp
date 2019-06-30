#include<iostream>
#include<stack>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    stack<long long int> s;
	    s.push(0);
	    long long int sum=0;
	    for(int j=n-1;j>0;j--){
	        if(arr[j]>arr[j-1]){
	            s.push(arr[j]);
	            sum+=s.top();
	        }else{
	            while(!s.empty()){
	                if(s.top()>arr[j-1]){
	                    sum+=s.top();
	                    break;
	                }else{
	                    s.pop();
	                }
	            }
	        }
	    }
	  cout<<sum%1000000001<<"\n";

	}
	return 0;
}
