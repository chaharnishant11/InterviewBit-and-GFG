#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >>t;
	while(t--){
	    int v,e;
	    cin >> v >> e;
	    int a[e],b[e];
	    for(int i=0;i<e;i++){
	        int x,y;
	        cin >> x >> y;
	        a[i]=x;
	        b[i]=y;
	    }
	    for(int i=0;i<v;i++){
	        cout << i ;
	        for(int j=0;j<e;j++){
	            if(a[j]==i){
	                cout << "-> " << b[j];
	            }if(b[j]==i){
	                cout << "-> " << a[j];
	            }
	        }
	        cout << endl;
	    }
	}
	return 0;
}
