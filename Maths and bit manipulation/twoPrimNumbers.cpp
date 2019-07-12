#include <iostream>
#include <map>
using namespace std;

int main() {
	//code
	bool prime[10001];
	for(int i=0;i<10001;i++){
	    prime[i]=true;
	}
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i<10001;i++){
	    if(prime[i]){
	        for(int j=i*i;j<10001;j+=i){
	            prime[j]=false;
	        }
	    }
	}
	map<int,int> m;
	for(int i=2;i<10001;i++){
	    if(prime[i]){
	        m[i]++;
	    }
	}
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    map<int,int> :: iterator it=m.begin();
	    while(it!=m.end()){
	        int rem=n-it->first;
	        if(m.find(rem)!=m.end()){
	            if(rem>it->first){
	                cout << it->first << " " << rem << endl;
	            }else{
	                cout << rem << " " << it->first << endl;
	            }
	            break;
	        }
	        it++;
	    }
	}
	return 0;
}
