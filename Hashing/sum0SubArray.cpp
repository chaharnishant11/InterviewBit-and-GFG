#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    unordered_map<int,int> m;
	    int sum=0;
	    int c=0;
	    for(int i=0;i<n;i++){
	        sum+=a[i];
	        if(sum==0){
	            c++;
	        }if(m.find(sum)!=m.end()){
	            c+=m[sum];;
	        }
	        m[sum]++;

	    }
	    cout << c << endl;
	}
	return 0;
}
