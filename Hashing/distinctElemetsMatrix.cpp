#include<iostream>
#include<map>
using namespace std;
int main()
 {
	//code
	int t;cin>>t;
	while(t--){
	    int n1;cin>>n1;
	    map <int,int> m1;
	    int temp;
	    for(int i=0;i<n1;i++){
	        cin>>temp;
	        m1[temp]=1;
	    }
	    for(int i=1;i<n1;i++){
	        for(int j=0;j<n1;j++){
	            cin>>temp;
	            if(m1[temp]>=i){
	                m1[temp]=i+1;
	            }
	            else m1[temp]=0;
	        }
	    }

	    int count=0;
	    for(auto i: m1)if(i.second==n1)count++;
	    cout<<count<<endl;
	}
	return 0;
}
