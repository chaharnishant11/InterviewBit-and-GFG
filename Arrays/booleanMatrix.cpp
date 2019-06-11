#include <iostream>
using namespace std;

int main() {
	//code
	int t=0;
	cin >> t;
	while(t-->0){
	    int r,c;
	    cin >> r >> c;
	    int R[r]={0};
	    int C[c]={0};
	    for(int i=0;i<r;i++){
	        int x;
	        for(int j=0;j<c;j++){
	            cin >> x;
	            if(x==1){
	                R[i]=1;
	                C[j]=1;
	            }
	        }
	    }
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            if(R[i]==1 || C[j]==1){
	                cout << "1" << " ";
	            }else{
	                cout << "0" << " ";
	            }
	        }
	        cout << endl;
	    }

	}
	return 0;
}
