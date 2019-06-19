#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n,m,k;
	    cin >> n >> m >> k;
	    int a[n],b[m];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }for(int i=0;i<m;i++){
	        cin >> b[i];
	    }
	    unordered_map<int,int> map1,map2;
	    for(int i=0;i<n;i++){
	        map1[a[i]]++;
	    }for(int i=0;i<m;i++){
	        map2[b[i]]++;
	    }
	    bool printed = false;
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        if(map2.find(k-a[i])!=map2.end()){
	            if(!printed){
	                cout  << a[i] << " " << k-a[i];
	            }else{
	                cout << ", "<< a[i] << " " << k-a[i] ;
	            }
	            printed=true;
	            map1[a[i]]=0;
	            map2[k-a[i]]=0;
	        }
	    }
	    if(!printed){
	        cout << -1 << endl;
	    }
	    else{
	        cout << endl;
	    }
	}
	return 0;
}
