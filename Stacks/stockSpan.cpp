#include <iostream>
#include <stack>
using namespace std;

void stock(int *a,int n){
    int* ans=new int[n];
    stack<int> s;
    int i=0;
    s.push(i);
    i++;
    ans[0]=1;
    for(i=1;i<n;i++){
        while(!s.empty() && (a[i]>=a[s.top()])){
            s.pop();
        }if(s.empty()){
            ans[i]=i+1;
        }else{
            ans[i]=i-s.top();
        }
        s.push(i);
    }

    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++) cin >> a[i];
	    stock(a,n);
	}
	return 0;
}
