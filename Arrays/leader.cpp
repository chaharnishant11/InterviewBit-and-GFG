#include <iostream>

using namespace std;
//O(n^2)
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

//O(n)
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >>t;
	while(t-->0){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    stack<int>s;
	    s.push(a[n-1]);
	    int max=a[n-1];
	    for(int i=n-2;i>=0;i--){
	        if(a[i]>=max){
	            s.push(a[i]);
	            max=a[i];
	        }
	    }
	    while(!s.empty()){
	        int a=s.top();
	        s.pop();
	        cout << a << " ";
	    }
	    cout << endl;
	}
	return 0;
}
