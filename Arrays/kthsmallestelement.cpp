#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int h[100000]={0};
        for(int i=0;i<n;i++){
        cin>>a[i];
            h[a[i]]++;
        }
        int k;
        cin>>k;
        for(int i=1;i<=100000;i++){
            if(h[i]>=1)
            k--;
            if(k==0){
            cout<<i<<endl;
            break;}
        }

    }
	//code
	return 0;
}
