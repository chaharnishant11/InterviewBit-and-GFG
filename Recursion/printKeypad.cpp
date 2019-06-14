#include <iostream>
#include <string>
#include <vector>
using namespace std;

void helper(int a[],string ans,vector<string> s,int n){
    if(n==0){
        cout << ans << " ";
        return;
    }
    int r=a[0];
    for(int i=0;i<s[r].length();i++){
        helper(a+1,ans+s[r][i],s,n-1);
    }
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
	    vector<string> s{" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	    helper(a,"",s,n);
	    cout << endl;
	}
	return 0;
}
